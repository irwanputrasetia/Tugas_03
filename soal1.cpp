#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int x, y, hasil;
	cout << "Input nilai x = ";
	cin  >> x;
	
	cout << "Input nilai y = ";
	cin  >> y;
	
		if (x > y)	{
		hasil = y - x;	
		cout<<abs (hasil)<<endl;
		cout<<"Hasil Positif";
	}
	
		else if (y > x) {
		hasil = x - y;
		cout<<abs (hasil)<<endl;
		cout<<"Hasil Positif";
	}
	
		else if (hasil < 0) {
		hasil = hasil * (-1) ;
		cout<<abs (x-y)<<endl;
		cout<<"Hasil Positif";
	}
}
