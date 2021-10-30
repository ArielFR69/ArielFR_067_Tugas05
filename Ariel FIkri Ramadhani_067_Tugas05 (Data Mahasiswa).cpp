#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
	int a[1000], b[1000], c[1000], n, jumlah1, jumlah2;
	double rata_pertahun, rata_tk, rata_te;
 
	cout<<" Masukan banyak data yang ingin diinput = "; cin>>n;
	cout<<endl<<endl;
	
	for (int i=0;i<n;i++){
		cout<<" Data ke-"<<i+1<<endl;
		cout<<" Tahun Prodi     = ";
  		cin>>a[i];
  		cout<<" Teknik Komputer = "; cin>>b[i];
  		cout<<" Teknik Elektro  = "; cin>>c[i];
	}
 	
	 system("cls");
 	cout<<"Output:\n\n";
 	cout<<"\t\t     DATA KELULUSAN MAHASISWA"<<endl;
	cout<<"\t\t\t     2015-2016       "<<endl;
	cout<<" ============================================================== "<<endl;
	cout<<"| Tahun Prodi  |  Teknik  | Teknik  |  Rata-rata kelulusan per |"<<endl;
	cout<<"|              | Komputer | Elektro |     tahun semua prodi    |"<<endl;
	cout<<" ============================================================== "<<endl;
	
 	for(int i=0;i<n;i++){
  		cout<<"| "<<setiosflags(ios::left)<<setw(13)<<a[i];
  		cout<<"| "<<setiosflags(ios::left)<<setw(9)<<b[i];
  		cout<<"| "<<setiosflags(ios::left)<<setw(8)<<c[i];
  		rata_pertahun=(b[i]+c[i])*0.5;
  		cout<<"| "<<setiosflags(ios::left)<<setw(24)<<rata_pertahun<<" |";
		cout<<"\n|--------------------------------------------------------------|\n";
	}
	
	jumlah1=0;
	jumlah2=0;
	for(int i=0;i<n;i++){
		jumlah1=jumlah1+b[i];
		jumlah2=jumlah2+c[i];
		rata_tk=jumlah1/n;
		rata_te=jumlah2/n;
	}
	
	cout<<"|  Rata-rata   |          |         |                          |"<<endl;
	cout<<"| pertahun per | "<<setiosflags(ios::left)<<setw(9)<<rata_tk;
	cout<<"| "<<setiosflags(ios::left)<<setw(8)<<rata_te;
	cout<<"|                          |"<<endl;
	cout<<"|     prodi    |          |         |                          |"<<endl;
	cout<<" ============================================================== "<<endl;
	
	getch();
	return 0;
}