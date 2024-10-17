#include <iostream>
#include <cmath> 

using namespace std;
int main(){
	int x1, x2, x3, x4;
	
	cin >> x1 >> x2 >> x3 >> x4;
	// x1<x2<x3;
	
	if (x4>x3) {
		cout << x1 << " " << x2 << " " << x3 << " " << x4;
	} else if (x4>x2 and x4<=x3) {
		cout << x1 << " " << x2 << " " << x4 << " " << x3;
	} else if (x4>x1 and x4<=x2) { 
		cout << x1 << " " << x4 << " " << x2 << " " << x3;
	} else { 
		cout << x4 << " " << x1 << " " << x2 << " " << x3;
	}

	return 0;
}
