#include <iostream>
#include <cmath> 
using namespace std;
int main(){ 
	float valor1 = 3.14, valor2 = 3.5;
	//cin >> valor1 >> valor2;
	//entrada digitada pelo usuário
	cout << round(valor1) << endl; //sai 3
	cout << round(valor2) << endl; //sai 4 
	
	cout << ceil(valor1) << endl; //sai 4 
	cout << floor(valor1) << endl; //sai 3 
	
	cout << ceil(valor2) << endl; //sai 4
	cout << floor(valor2) << endl; //sai 3 
	//ceil sempre arredonda para cima; floor para baixo  
	
	float aux = floor(valor1) + 10; 
	cout << aux;
	
	return 0;
}
