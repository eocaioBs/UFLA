// Aula e exercícios// 
#include <iostream> 
#include <cmath> 
using namespace std;
int main(){
	// Declaração de variáveis 
	float x1, y1, x2, y2, distancia;
	// Leitura e ordem dos dados
	cin >> x1 >> y1 >> x2 >> y2;
	float aux1 = x2-x1;
	cout << aux1 << endl;
	float aux2 = y2-y1; 
	cout << aux2 << endl;
	// float aux3 = pow(aux1, 2) + pow(aux2, 2), sqrt(aux3) 
	distancia = sqrt(pow(aux1, 2) + pow(aux2, 2)); 
	cout << distancia;  
	return 0;
}
