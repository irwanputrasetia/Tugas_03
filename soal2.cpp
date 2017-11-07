#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	char bangun;
	double p,l,a,t,Luas;

	cout << "Pilih Bidang : ";
	cin >> bangun;
	
		if (bangun == 'P' || bangun == 'p') {	
		cout << "   Mengitung luas persegi panjang \n";	
		cout << "   Masukkan panjangnya : ";
		cin >> p;
		cout << "   Masukkan lebarnya   : ";
		cin >> l;
		Luas = p*l;
		cout << "   Luas persegi panjang : "<< Luas<<endl;
	}
	else if (bangun == 'S' || bangun == 's') {
		cout << "   Mengitung luas segitiga \n";	
		cout << "   Masukkan alasnya   : ";
		cin >> a;
		cout << "   Masukkan tingginya : ";
		cin >> t;
		Luas = 0.5*a*t;
		cout << "   Luas persegi panjang : "<< Luas<<endl;
	}	
	else{
		cout<<"Maaf, Anda Salah Memilih"<<endl;
	}
}
