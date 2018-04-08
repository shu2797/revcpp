#include <iostream>

using namespace std;

void myFunction(int a, const char** str) { //pass by value: const char* str
	a = 4;
	cout << *str << ' ' << a << endl; //remove * if pass by value
	*str = "a is now..."; //remove * if pass by value
}

int main() {
	short s1 = 965;
	short* ps1 = &s1;
	short* ps2 = ps1;
	short s2 = *ps2;
	
	cout << s1 << endl << ps1 << endl << ps2 << endl << s2 << endl;

	//myFunction
	int a = 5;
	const int* s = &a;
	const char* p = "a in function is";
	myFunction(a, &p); //a by value, p by pointer.. don't put & if passing by value
	cout << p << ' ' << a << endl;



	cin.ignore();
	return 0;
}