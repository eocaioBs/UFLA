#include <iostream>
#include <iomanip>
#include <cmath> 
#include <fstream>
using namespace std;

	int main() {
		int num;
		cout << "Digite um numero: ";
		cin >> num;
		
		if (num % 2 == 0) {
			cout << num <<" par";
		}
		
		else {
			cout << num << " impar";
		}
		
		return 0;
}
