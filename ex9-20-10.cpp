#include <iostream>
#include <cmath>

using namespace std;
	int main() {
	
	float compra, valorF, valorP;
	int parcela;
	string modelo;
	
	cin >> compra;
	cin >> modelo;
	if (modelo == "P") {
		cin >> parcela;
	} 
	
	if (modelo == "V"){
		valorF = compra - (compra*0.10); 
		cout << valorF;
	} else if (modelo == "P" && parcela == 3){
		valorF = compra;
		valorP = compra/3.0;
		cout << valorF << endl << valorP;
	} else if (modelo == "P" && parcela == 6){
		valorF = compra*1.05;
		valorP = valorF/6.0;
		cout << valorF << endl << valorP;
	} else {
		valorF = compra*1.10;
		valorP = valorF/12.0;
		cout << valorF << endl << valorP;
	}
	
	return 0;
}
