#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int a, k, x, c, m1[10][10], m2[10][10], res[10][10];
  
        cout << " Program Pengurangan Matriks"<<endl;
        cout << " Jumlah baris : "; cin >> a;
        cout << " Jumlah kolom : "; cin >> k;

        cout << "\n Masukkan (" << a*k << " elemen) matriks pertama: \n"<<endl;

        for(x=0; x<a; x++) {
            for(c=0; c<k; c++) {
            cout << " "; cin >> m1[x][c];
            }
        }

        cout << "\n Masukkan (" << a*k << " elemen) matriks kedua: \n"<<endl;
        for(x=0; x<a; x++) {
            for(c=0; c<k; c++) {
            cout << " "; cin >> m2[x][c];
            }
        }
        
        cout << "\n Matriks ke-1: \n";
        for(x=0; x<a; x++) {
            for (c=0; c<k; c++) {
            cout << " " << m1[x][c] << "\t";
            }
            cout << endl;
        }

        cout << "\n Matriks ke-2: \n";
        for(x=0; x<a; x++) {
            for(c=0; c<k; c++) {
            cout << " " << m2[x][c] << "\t";
            }
            cout << endl;
        }
        
        cout << "\n--------------------------------------";
        cout << "\n\n Hasil Pengurangan Matriks: \n";
        for(x=0; x<a; x++) {
            for(c=0; c<k; c++) {
            res[x][c] = m1[x][c] - m2[x][c];
            cout << " " << res[x][c] << "\t";
            }
            cout << endl;
        }
        
        getch();
        }