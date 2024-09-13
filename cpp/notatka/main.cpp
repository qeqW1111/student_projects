#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
	string nazwa,zawartosc;

	
	cout<< "podaj nazwe pliku: ";
	getline(cin, nazwa);


	cout<<"podaj zawartosc pliku: ";
	getline(cin, zawartosc);


	ofstream plik_zapis(nazwa);


	if (plik_zapis.is_open()){
		plik_zapis << zawartosc << endl;
		plik_zapis.close();
		cout<<"dane zostaly zaspisane w: "<< nazwa<<endl;
	} else {
		cerr<< "nie udalo sie otworzyc pliku do zapisu" << endl;
		return 1;

}
return 0;

}
