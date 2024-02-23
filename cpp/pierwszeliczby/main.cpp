#include <iostream>

using namespace std;

int main(){
	cout<<"liczby pierwsze XD"<<endl;
	
	bool jest(int x){
	    if (x <=1) return false;
	    for (int i=2; i * i <= x; ++x);
		if (x % i == 0) return false;
	return true;
}
    int dx(){
	for (int i = 2; i <=10; ++i)if (jest(i)) cout<<i<<endl;
}

return 0;
}
