#include <iostream>
#include <cmath>
#include <string>

using namespace std;
	int main() {
	
	int x1, y1, x2, y2, x3, y3;
	float d1, d2, d3, tempo;
	string transito1, transito2, transito3;
	
	cin >> x1 >> y1 >> transito1;
	cin >> x2 >> y2 >> transito2;
	cin >> x3 >> y3 >> transito3;
	
	d1 = sqrt((pow(x1, 2)) + (pow(y1, 2)));
	d2 = sqrt((pow(x2-x1, 2)) + (pow(y2-y1, 2)));
	d3 = sqrt((pow(x3-x2, 2)) + (pow(y3-y2, 2)));
	
	if (transito1 == "cheio" && transito2 == "cheio" && transito3 == "cheio") {
		tempo = (d1+d2+d3) * 18;
		cout <<  "Bicicleta" << endl << ceil(tempo) << endl;
	} else if (transito1 == "cheio" && transito2 == "cheio" && transito3 == "livre") {
		tempo = ((d1+d2) * 18) + d3*15;
		cout <<  "Bicicleta" << endl << ceil(tempo) << endl;
	} else if (transito1 == "cheio" && transito2 == "livre" && transito3 == "cheio") {
		tempo = ((d1+d3) * 18) + d2*15;
		cout <<  "Bicicleta" << endl << ceil(tempo) << endl;
	} else if (transito1 == "livre" && transito2 == "cheio" && transito3 == "cheio") {
		tempo = ((d2+d3) * 18) + d1*15;
		cout <<  "Bicicleta" << endl << ceil(tempo) << endl;
	} else if (transito1 == "livre" && transito2 == "livre" && transito3 == "cheio") {
		tempo = ((d1+d2) * 5) + d3*24;
		cout << "Carro" << endl << ceil(tempo) << endl;
	} else if (transito1 == "livre" && transito2 == "cheio" && transito3 == "livre") {
		tempo = ((d1+d3) * 5) + d2*24;
		cout << "Carro" << endl << ceil(tempo) << endl;
	} else if (transito1 == "cheio" && transito2 == "livre" && transito3 == "livre") {
		tempo = ((d2+d3) * 5) + d1*24;
		cout << "Carro" << endl << ceil(tempo) << endl;
	} else {
		tempo = (d1+d2+d3) * 5;
		cout << "Carro" << endl << ceil(tempo) << endl;
	}	
		
	return 0;
}
