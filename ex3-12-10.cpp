#include <iostream> 
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;
	int main() {
		
		float x1, y1, x2, y2, distancia, aux1, aux2;
		
		ifstream entry("entrada.txt");
		entry >> x1 >> y1 >> x2 >> y2;
		entry.close();
		
		aux1 = x2-x1;
		aux2 = y2-y1;
		
		distancia = sqrt((pow(aux1, 2)) + (pow(aux2, 2)));
		
		cout << distancia;
		
		
		
		
		
	return 0;
}
