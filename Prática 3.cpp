#include <iostream>
#include <cmath> 
using namespace std;
int main(){ 
	int x = 10;
	x++;
	cout << "x++  " << x << endl;
	
	x = 10;
	x--;
	cout << "x--  " << x << endl;
	
	x = 10;
	x+=2;
	cout << "x+=2  " << x << endl; 
	// sempre botar int antes de definir o valor da variável 
	
	int x = 10;
	int y = --x; // equivale a x = x - 1; y=x;  
	cout << y << "\t  " << x << endl;
	
	x = 10 
	y = x--; // equivale a y = x; x = x - 1;
	cout <<  y << "\t" << x << endl;
	return 0;
}
