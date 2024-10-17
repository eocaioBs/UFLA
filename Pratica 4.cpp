#include <iostream>
#include <cmath>
#include <fstream> 
using namespace std;
int main(){
	ofstream arq("arquivo.txt");
	
	int numero;
	cin >> numero; //ler da entrada padrao  
	arq << numero; //escrever em um arquivo  
	return 0;
}
