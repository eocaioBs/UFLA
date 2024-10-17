#include <iostream>
#include <fstream>

using namespace std;

	int main() {
		string nomeArqv, texto;
		cin >> nomeArqv >> texto;
		
		ofstream arquivo(nomeArqv);
		arquivo << texto;
		
		
		return 0;
}
