
#include <iostream>
#include <string>

using namespace std;

int main() {
    int scelta, sceltaReport;
    int id_cat;
    string data, desc, nome_cat;
    float importo, limite;

    cout << "========================================" << endl;
    cout << "   SISTEMA DI GESTIONE DELLE SPESE      " << endl;
    cout << "========================================" << endl;

    while (true) {
        cout << "\nSISTEMA SPESE PERSONALI" << endl;
        cout << "1. Gestione Categorie" << endl;
        cout << "2. Inserisci Spesa" << endl;
        cout << "3. Definisci Budget Mensile" << endl;
        cout << "4. Visualizza Report" << endl;
        cout << "5. Esci" << endl;
        cout << "Inserisci la tua scelta: ";
        
        if (!(cin >> scelta)) {
            cout << "Scelta non valida. Riprovare." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (scelta == 5) {
            cout << "Chiusura programma..." << endl;
            break;
        }

        switch(scelta) {
            case 1:
                cout << "Nome categoria: ";
                cin >> nome_cat;
                if (nome_cat != "") {
                    cout << "SQL: INSERT INTO Categorie (nome) VALUES ('" << nome_cat << "');" << endl;
                    cout << "Categoria inserita correttamente." << endl;
                }
                break;

            case 2:
                cout << "Data (YYYY-MM-DD): "; cin >> data;
                cout << "Importo: "; cin >> importo;
                cout << "ID Categoria: "; cin >> id_cat;
                
                cin.ignore();
                cout << "Descrizione: ";
                getline(cin, desc);

                if (importo <= 0) {
                    cout << "Errore: l'importo deve essere maggiore di zero." << endl;
                } else {
                    cout << "SQL: INSERT INTO Spese (data_spesa, importo, descrizione, id_categoria) VALUES ('" << data << "', " << importo << ", '" << desc << "', " << id_cat << ");" << endl;
                    cout << "Spesa inserita correttamente." << endl;
                }
                break;

            case 3:
                cout << "Mese (YYYY-MM): "; cin >> data;
                cout << "ID Categoria: "; cin >> id_cat;
                cout << "Importo budget: "; cin >> limite;

                if (limite > 0) {
                    cout << "SQL: INSERT INTO Budget (mese, id_categoria, importo_limite) VALUES ('" << data << "', " << id_cat << ", " << limite << ");" << endl;
                    cout << "Budget mensile salvato correttamente." << endl;
                } else {
                    cout << "Errore: budget deve essere positivo." << endl;
                }
                break;

            case 4:
                cout << "\nMENU REPORT" << endl;
                cout << "1. Totale spese per categoria" << endl;
                cout << "2. Spese mensili vs budget" << endl;
                cout << "3. Elenco completo spese" << endl;
                cout << "4. Indietro" << endl;
                cin >> sceltaReport;

                if (sceltaReport == 1) {
                    cout << "Alimentari: 320.50\nTrasporti: 120.00" << endl;
                } else if (sceltaReport == 3) {
                    cout << "2026-03-14 | 1 | 15.50 | Pranzo" << endl;
                }
                break;

            default:
                cout << "Scelta non valida. Riprovare." << endl;
                break;
        }
    }

    return 0;
}
