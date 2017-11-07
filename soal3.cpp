#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	int gaji,jam,lembur,gatot,pajak;
	
	cout << "Masukkan gaji pegawai : ";
	cin >> gaji;
	cout << "Masukkan jam kerja    : ";
	cin >> jam;
	
	lembur= jam - 40;
	gatot = (lembur*1.5+40)+gaji;
	pajak=gatot*0.15;
	gatot=gatot-pajak;
	
	cout<<"Gaji bersih pegawai : "<< gatot<<endl;
}
