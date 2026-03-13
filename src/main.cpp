#include <iostream>
#include <string>

using namespace std;

// Semplice funzione per stampare il menu
void stampaMenu() {
    cout << "\n--- GESTIONALE SPESE ---" << endl;
    cout << "1) Gestisci Categorie" << endl;
    cout << "2) Aggiungi spesa" << endl;
    cout << "3) Imposta Budget" << endl;
    cout << "4) Report" << endl;
    cout << "5) Esci" << endl;
    cout << "Scegli: ";
}

int main() {
    int scelta = 0;

    // Ciclo per far restare l'utente nel programma
    while (scelta != 5) {
        stampaMenu();
        cin >> scelta;

        switch(scelta) {
            case 1:
                cout << "\n[OK] Qui poi metto la lista delle categorie." << endl;
                break;
            case 2:
                cout << "\n[OK] Qui aggiungeremo l'importo e la descrizione." << endl;
                break;
            case 3:
                cout << "\n[OK] Sezione budget ancora da scrivere." << endl;
                break;
            case 4:
                cout << "\n[OK] Qui usciranno i calcoli delle spese." << endl;
                break;
            case 5:
                cout << "\nChiudo il programma..." << endl;
                break;
            default:
                cout << "\nScelta sbagliata, riprova." << endl;
                break;
        }
    }

    return 0;
}
