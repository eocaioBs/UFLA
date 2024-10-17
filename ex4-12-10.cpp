#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
	int main() {
		int numero, soma, produto;
		float digito1, digito2, digito3;
		
		cin >> numero;
		
		digito3 = numero%10;
		numero = numero/10;
		digito2 = numero%10;
		digito1 = numero/10;
		
		//cout << digito1 << endl << digito2 << endl << digito3 << endl;
		
		soma = digito1 + digito2 + digito3;
		produto = digito1*digito2*digito3;
		
		cout << soma;
		
		ofstream saida("saida.txt");
		saida << produto;
		saida.close();
		
		return 0;
		
}
