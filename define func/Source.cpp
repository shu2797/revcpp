#include <iostream>

#define max(a,b) ((a++ > b++) ? a++ : b++)

using namespace std;

int main() {
	int x = 4, y = 2;
	cout << max(x, y) << endl << x << endl << y; //not a function call.. done by pre-processor
	cin.ignore();
	return 0;
}