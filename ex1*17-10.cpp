#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int ano;
	cin >> ano;
	// bissexto se ano%400 = 0 ou ano%4 = 0;
	
	if (ano%400 == 0) {
		cout <<  "1" << endl;
	} else if (ano%4 == 0 and ano%100 != 0) { 
		cout << "1" << endl;
	} else { 
		cout << "0" << endl;
	}
	
	
	
	return 0;
}
