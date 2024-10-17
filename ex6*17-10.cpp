#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double altura, peso;
	cin >> peso >> altura;
	
	if (altura < 1.20 and peso < 60) {
		cout << "A" << endl;
	} else if (altura < 1.20 and peso >= 60 and peso <= 90) {
		cout << "D" << endl;
	} else if (altura < 1.20 and peso > 90) { 
		cout << "G" << endl;
	} else if (altura >= 1.20 and altura <= 1.70 and peso < 60) { 
		cout << "B" << endl;
	} else if (altura >= 1.20 and altura <= 1.70 and peso >= 60 and peso <= 90) {
		cout << "E" << endl;
	} else if (altura >= 1.20 and altura <= 1.70 and peso > 90 ) {
		cout << "H" << endl;
	} else if (altura > 1.70 and peso < 60) {
		cout << "C" << endl;
	} else if (altura > 1.70 and peso >= 60 and peso <= 90) {
		cout << "F" << endl;
	} else {
		cout << "I" << endl;
	}
	
	
	
	return 0;
}
