#include<iostream>
using namespace std;
long int faktorial(int a);

int main(){
	int r, hasil;
	cout << "MENGHITUNG NILAI FAKTORIAL DENGAN REKURSIF" << endl << endl;
	cout << "Masukkan Nilai = ";
	cin >> r;
	hasil = faktorial(r);
	cout << "Faktorial " << r << "! = " << hasil << endl;
}

long int faktorial (int a){
	if(a==1)
		return (a);

	else
	return (a*faktorial(a-1));
}
