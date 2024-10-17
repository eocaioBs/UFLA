#include <iostream>
#include <fstream>

using namespace std;
	int main() {
		string palavra;
		string nomeArqv;
		
		cin >> nomeArqv;
		
		ifstream arq(nomeArqv);
		arq >> palavra;
		
		cout << palavra;
		
		return 0;
}
