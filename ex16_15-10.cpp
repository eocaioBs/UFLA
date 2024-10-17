#include <iostream> 
#include <cmath>
#include <fstream>
#include <iomanip> 

using namespace std;
	int main(){
		float preco, desconto, p1, p2;
		
		ifstream open("valor.txt");
		open >> preco;
		open.close();
		
		desconto = preco - (preco*0.08);
		p1 = preco/4.0;
		p2 = (preco*1.10)/10.0;
		
		ofstream exit("opcoes.txt");
		exit << setprecision(2) << fixed << desconto << endl;
		exit << setprecision(2) << fixed << p1 << endl;
		exit << setprecision(2) << fixed << p2 << endl;
		exit.close();
		

		return 0;
}
