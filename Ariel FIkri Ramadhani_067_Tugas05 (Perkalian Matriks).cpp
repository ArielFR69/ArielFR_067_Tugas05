#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int max1[10][10], max2[10][10], result[10][10];
    int i, j, k, a, b, c, d, res = 0;
    char obj;

    start :
    cout << "\tPerkalian Matriks"<<endl;
    cout << "Masukkan jumlah baris matriks pertama : "; cin >> a;
    cout << "Masukkan jumlah kolom matriks pertama : "; cin >> b;
    cout << "Masukkan jumlah baris matriks kedua : "; cin >> c;
    cout << "Masukkan jumlah kolom matriks kedua : "; cin >> d;


    if(b != c){
        cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
    }else{
        cout << "Masukkan isi matriks pertama : \n";
        for(i = 0; i < a; i++){
            for(j = 0; j < b; j++){
                cin >> max1[i][j];
      }
    }
    cout << "Masukkan isi matriks kedua : \n";
    for(i = 0; i < c; i++){
      for(j = 0; j < d; j++){
        cin >> max2[i][j];
      }
    }
    for(i = 0; i < a; i++){
      for(j = 0; j < d; j++){
        for(k = 0; k < c; k++){
          res = res + max1[i][k] * max2[k][j];
        }
        result[i][j] = res;
        res = 0;
      }
    }
    cout << "Hasil perkalian matriks: \b";
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cout << result[i][j] << "\t";
      }
      cout << endl;
    }
  }
        cout << "Apakah anda ingin menghitung lagi? [Y/N] ="; cin>>obj;
    if (obj== 'Y' || obj== 'y'){
        goto start;
    }
    else if (obj== 'N' || obj== 'b'){
        exit( 0 );
    }

}