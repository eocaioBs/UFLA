#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;
	int main() {
		
		int nota1, peso1, nota2, peso2, nota3, peso3;
		float prodP1, prodP2, prodP3, somaT;
		float mediaP;
		
		ifstream entrada("notas.txt");
		entrada >> nota1 >> peso1 >> nota2 >> peso2 >> nota3 >> peso3;
		entrada.close();
		
		prodP1 = nota1*peso1;
		prodP2 = nota2*peso2;
		prodP3 = nota3*peso3;
		somaT = peso1+peso2+peso3;
		
		mediaP = (prodP1 + prodP2 + prodP3)/(somaT);
		
		ofstream fim("final.txt");
		fim << setprecision(2) << fixed << mediaP << endl;
		fim.close();
		
		return 0;
		
}
