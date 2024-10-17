#include <iostream>
#include <cmath> 
#include <fstream>
#include <iomanip>

using namespace std;
int main(){
	
	float salario, bonus, taxa, ganhoBruto, imposto, ganhoLiquido;
	
	cin >> salario >> bonus >> taxa;
	
	ganhoBruto = salario + bonus;
	imposto = ganhoBruto*(taxa*0.01);
	ganhoLiquido = ganhoBruto - imposto;
	cout << imposto;
	
	ofstream exit("holerite.txt");
	exit << setprecision(2) << fixed << ganhoBruto << endl;
	exit << setprecision(2) << fixed << imposto << endl;
	exit << setprecision(2) << fixed << ganhoLiquido << endl;
	
	
	return 0;
}
