#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
	int main(){
	
	float lab, av, exame, mediaP;
	cin >> lab >> av >> exame;
	mediaP = (((lab*2) + (av*3) + (exame*5))/(2+3+5));
	if (mediaP >= 8.0){
		cout << mediaP << endl << "A" << endl;
	} else if (mediaP >= 7.0) {
		cout << mediaP << endl << "B" << endl;
	} else if (mediaP >= 6.0) {
		cout << mediaP << endl << "C" << endl;
	} else if (mediaP >= 5.0) {
		cout << mediaP << endl << "D" << endl;
	} else {
		cout << mediaP << endl << "E" << endl;
	}
	return 0;
	
}
