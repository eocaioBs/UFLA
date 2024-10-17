#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int idade;
	float peso;
	cin >> idade;
	cin >> peso;
	
	if (idade < 20 and peso < 60) {
		cout << "9" << endl;
	} else if (idade < 20 and peso <= 90) { 
		cout << "8" << endl;
	} else if (idade < 20 and peso > 90) { 
		cout << "7" << endl;
	} else if (idade >= 20 and idade <= 50 and peso < 60) {
		cout << "6" << endl;
	} else if (idade >= 20 and idade <= 50 and peso <= 90) { 
		cout << "5" << endl;
	} else if (idade >= 20 and idade <= 50 and peso > 90) { 
		cout << "4" << endl;
	} else if (idade > 50 and peso < 60) {
		cout << "3" << endl;
	} else if (idade > 50 and peso <= 90) {
		cout << "2" << endl;
	} else { 
		cout << "1" << endl;
	}
	
	
	return 0;
}
