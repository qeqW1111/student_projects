#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int numer;
	cout<< " podaj liczbe calkowita: "<<endl;
	cin>>numer;

	if(numer==0){
		cout<<"podana liczba nie jest calkowita"<<endl;
		return 1;
}
	int square = numer * numer;
	
	int xd = sqrt(numer);
	if (numer<0){
	cout<<"Kwadratem liczby "<< numer << "jest "<< square<< "a pierwiastka nie da sie wyciagnac"<<endl;
}
else{

	cout<<"Kwadratem liczby "<< numer << " jest "<< square<< " a pierwiastkiem kwadratowym jest "<<xd<<endl;	

}











	return 0;
}
