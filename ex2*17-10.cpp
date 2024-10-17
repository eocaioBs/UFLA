#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double a, b;
	cin >> a >> b;
	
	int x; // x está entre 1 e 4
	cin >> x;
	
	if (x>4) {
		cout << "ERRO" << endl;
	} else if (x==1) {
		cout << (a+b)/2 << endl;
	} else if (x == 2 and a>b) {
		cout << a-b << endl;
	} else if (x == 2 and a<b) { 
		cout << b-a << endl;
	} else if (x == 3) {
		cout << a*b << endl;
	} else if (x == 4 and b == 0) { 
		cout << "ERRO" << endl;
	} else { 
		cout << a/b << endl;
	}
	
	return 0;
}
