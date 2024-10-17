#include <iostream>
#include <cmath>

using namespace std;
	int main() {
		int numerador, divisor, quociente, resto;
		
		cin >> numerador >> divisor;
		
		if (divisor != 0){
			quociente = numerador/divisor;
			resto = numerador%divisor;
			cout << quociente << endl << resto;
		} else {
			cout << "erro" << endl;
		}
		
	return 0;
		
}
