using namespace std;
#include <iostream>
int main()
{ // deklaruojame kintamuosius
    float GBP_Bendras = 0.8593;
    float GBP_Pirkti = 0.8450;
    float GBP_Parduoti = 0.9060;

    float USD_Bendras = 1.0713;
    float USD_Pirkti = 1.0547;
    float USD_Parduoti = 1.1309;

    float INR_Bendras = 88.8260;
    float INR_Pirkti = 85.2614;
    float INR_Parduoti = 92.8334;

    float rezultatas, rezultatas1;

    int pasirinkimas, kursas, x, y, p;

    bool Kurso_palyginimas, Pirkti_valiuta, Parduoti_valiuta; // TRUE/FALSE reikšmės IF ciklui
start:
    cout << "Kokia funkcija norite pasirinkti?" << endl << "1 - Kurso palyginimas" << endl << "2 - Pirkti valiuta" << endl << "3 - Parduoti valiuta" << endl;
    cin >> pasirinkimas;
    //Kurso palyginimas (gerai apdaryta)

    if (pasirinkimas == 1) {
        cout << "Pasirinkite kurso palyginimus:" << endl << "21- GBP/USD" << endl << "23 - USD/INR" << endl << "24 - INR/GBP" << endl;
        cin >> kursas;

        if (kursas == 21)

            cout << GBP_Bendras << "/" << USD_Bendras << endl;

        if (kursas == 23)

            cout << USD_Bendras << "/" << INR_Bendras << endl;

        if (kursas == 24)

            cout << INR_Bendras << "/" << GBP_Bendras << endl;
    } // Valiutos pirkimas (gerai)
    else if (pasirinkimas == 2) {
        cout << "Įveskite valiutą, kurią norite pirkti:" << endl << "5 - GBP" << endl << "6 - USD" << endl << "7 - INR" << endl;
        cin >> kursas;

        if (kursas == 5) {
            cout << "Iveskite kieki svaru, kike norite pirkti" << endl;
            cin >> x;
            rezultatas = x / GBP_Pirkti;
            cout << "Valiutos pirksite " << rezultatas << "GBP" << endl;
        }

        if (kursas == 6) {

            cout << "Iveskite kieki USD, kiek norite pirkti" << endl;
            cin >> x;
            rezultatas = x / USD_Pirkti;
            cout << "Valiutos pirksite " << rezultatas << "USD" << endl;
        }

        if (kursas == 7) {

            cout << "Iveskite kieki, kiek INR norite pirkti" << endl;
            cin >> x;
            rezultatas = x / INR_Pirkti;
            cout << "Valiutos pirksite " << rezultatas << "INR" << endl;
        }
    }// Valiutos pirkimas (gerai)
    else if (pasirinkimas == 3) {
        cout << "Įveskite valiutą, kurią norite parduoti" << endl << "8 - GBP" << endl << "9 - USD" << endl << "10 - INR" << endl;
        cin >> kursas;

        if (kursas == 8) {

            cout << "Iveskite kiekį, kurį parduosite" << endl;
            cin >> x;
            rezultatas = x * GBP_Parduoti;
            cout << "Valiutos parduosite " << rezultatas << "GBP" << endl;
        }

        if (kursas == 9) {

            cout << "Iveskite kiekį, kurį parduosite" << endl;
            cin >> x;
            rezultatas = x * USD_Parduoti;
            cout << "Valiutos parduosite " << rezultatas << "USD" << endl;
        }

        if (kursas == 10) {

            cout << "Iveskite kiekį, kurį parduosite" << endl;
            cin >> x;
            rezultatas = x * INR_Parduoti;
            cout << "Valiutos parduosite " << rezultatas << "INR" << endl;
        }
    }

    cout << "Ar norite pratesti?" << endl << "0 - NE" << endl << "1 - TAIP" << endl;
    cin >> p;

    if (p == 1)
        goto start;
    return 0;
}


