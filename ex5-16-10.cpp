#include <iostream>
#include <cmath>

using namespace std;
	int main() {
	float n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	
	
	if (n1>n2 and n1>n3 and n1>n4) {
		float s1 = n2 + n3 + n4;
		cout << s1 << endl;
	} else if (n2>n1 and n2>n3 and n2>n4) {
		float s2 = n1 + n3 + n4;
		cout << s2 << endl;
	} else if (n3>n1 and n3>n2 and n3>n4) {
		float s3 = n1 + n2 + n4;
		cout << s3 << endl;
	} else { 
		float s4 = n1 + n2 + n3;
		cout << s4 << endl;
	}
	return 0;
	
}
