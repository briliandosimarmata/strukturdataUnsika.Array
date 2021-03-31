#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int baris;
    int kolom;

    cout << "==================="<< endl;
    cout << "Briliando Simarmata"<< endl;
    cout << "1610631170059"<< endl;
    cout << "==================="<< endl;
    cout << endl << endl;

    cout << "==============================" << endl;
    cout << "SOAL NO. 1 PENJUMLAHAN MATRIKS" << endl;
    cout << "==============================\n" << endl;


    do {
        cout << "Masukkan jumlah baris pada Matriks: ";
        cin >> baris;
        cout << "Masukkan jumlah kolom pada Matriks: ";
        cin >> kolom;
        cout << endl;
        if (baris > 100 || kolom > 100) {
            cout << "Jumlah baris/kolom melebihi batas maksimum (100)!" << endl << endl;
        }
    } while (baris > 100 || kolom > 100);

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan matriks A elemen a" << i+1 << j+1 << ": ";
            cin >> A[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan matriks B elemen b" << i+1 << j+1 << ": ";
            cin >> B[i][j];
        }
    }


    cout << endl;
    cout << endl;
    cout << "Hasil penjumlahan matriks A dan B, matriks C elemen c:" << endl;
    for (int i = 0; i < baris; i++) {
        cout << "   ";
        for (int j = 0; j < kolom; j++) {
            cout << (C[i][j] = A[i][j] + B[i][j]) << " ";
        }
        cout << endl;

    }

    getch();

    system("cls");

    cout << "===========================" << endl;
    cout << "SOAL NO. 2 MATRIKS SEGITIGA" << endl;
    cout << "===========================\n" << endl << endl;

    cout << "Masukkan jumlah baris pada Matriks: ";
    cin >> baris;
    cout << endl;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < baris; j++) {
            cout << "Masukkan matriks segitiga elemen S" << i+1 << j+1 << ": ";
            cin >> A[i][j];
        }
    }

    cout << endl;

    cout << "Matriks Segitiga Atas" << endl;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < baris; j++) {
            if (j > i) {
                cout << "0";
            } else {
                cout << A[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matriks Segitiga Bawah" << endl;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < baris; j++) {
            if (j < i) {
                cout << "0";
            } else {
                cout << A[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }

    getch();
 /*
    system("cls");

    cout << "========================" << endl;
    cout << "SOAL NO. 3 TRADING SAHAM" << endl;
    cout << "========================\n" << endl << endl;

    int saham[7] = {2, 30, 15, 10, 8, 25, 80};
    int x;
    int hasilkiri = 0;
    int hasilkanan = 0;

    for (int i = 0; i < 7 ; i++) {
        if (i%2 != 0) {
            x = - saham[i];
        } else {
            x = saham[i];
        }
        hasilkiri = hasilkiri + x;
        cout << hasilkiri <<" | ";
    }
    for (int i = 7; i > 0 ; i--) {
        if (i%2 == 0) {
            x = - saham[i];
        } else {
            x = saham[i];
        }
        hasilkanan = hasilkanan + x;
        cout << hasilkanan <<" | ";
    }

    cout << endl;
    cout << hasilkiri;
    cout << hasilkanan;

    */

    return 0;
}
