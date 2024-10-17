#include <iostream>
#include <fstream>

using namespace std;
int main(){
	
	string texto1, texto2, arquivo1, arquivo2, arquivo3;
	
	cin >> arquivo1;	
	ifstream arqv1(arquivo1);
	arqv1 >> texto1;
	
	cin >> arquivo2;
	ifstream arqv2(arquivo2);
	arqv2 >> texto2;
	
	//cout << texto1 << " " << texto2;
	cin >> arquivo3;
	ofstream arqv3(arquivo3);
	arqv3 << texto1 << " " << texto2; 
	return 0;
}
