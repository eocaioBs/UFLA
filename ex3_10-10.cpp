#include <iostream>
#include <fstream>
#include <cmath> 

using namespace std;
int main(){
	
	float x1, y1, x2, y2;
	float distancia; 
	//distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	
	ifstream entrada("entrada.txt");
	//entrada.open("entry.txt");
	entrada >> x1 >> y1 >> x2 >> y2;
	
	
	float aux1 = x2-x1;
	float aux2 = y2-y1;
	
	distancia = sqrt(pow(aux1, 2) + pow(aux2, 2));
	cout << distancia << endl;
	
	
	return 0;
}
