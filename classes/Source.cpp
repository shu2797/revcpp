#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MyClass
{
public:
	~MyClass() { cout << "Destructor" << this << endl; }

	MyClass() :i(0) { cout << "Default constructor " << this << endl; }

	MyClass(int i) :i(i) { cout << "int " << i << " constructor " << this << endl; }

	MyClass(const char* s) :i(2) { cout << "char* " << i << " constructor " << this << endl; }

private:
	int i;
};

int main() {
	MyClass ob;

	MyClass array1[5] = { 1,2,3,4,5 };
	MyClass array2[] = { "Hello", "goodbye" };

	vector<MyClass> vec(5);

	cin.ignore();
}