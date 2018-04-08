#include <iostream>

using namespace std;

int main() {
	char* argv[3];
	char a[] = "test";
	char b[] = "hello";
	char c[] = "world";
	char d[] = "14";

	argv[0] = a;
	argv[1] = b;
	argv[2] = c;
	argv[3] = d;

	const char* p = "a function"; //misc

	cout << argv[0] << "\n"; //prints string of characters pointed to by pointer in argv[0]
	cout << argv << "\n"; //prints pointer address

	char* param = argv[1]; //param takes pointer in argv[1]
	cout << param[0] << "\n"; //prints character at index 0
	cout << param << "\n"; //prints whole array (string)
	cout << *param << "\n"; //prints character at index 0 (same as param[0])
	cout << param[1] << "\n"; //prints character at index 1

	cout << *argv[1] << "\n"; //dereferences pointer at argv[1] to print first character of array (string)
	cout << argv[1][0] << "\n"; //prints character at index 0 of string pointed to by pointer in argv[1]

	cout << endl << "char and char*" << endl;

	char asd[3] = "qw"; //size 3 can store up to 2 characters

	const char* qwe;
	qwe = "sdf"; //size = 4... *qwe accesses first character.. qwe outputs full array.. can be accessed as array
	const char* s = qwe;

	cout << asd << endl << asd[0] << endl << qwe << endl << sizeof(qwe) << endl << *qwe << endl << qwe[2] << endl << ++s;
	//		"qw"			"q"				"sdf"									"s"				"f"				"df"
	//sizeof(qwe) gives size of pointer(address), which is 4 bytes on 32-bit systems and 8 bytes on 64-bit systems

	char kl = 's';
	cout << endl << sizeof(kl);

	cin.ignore();
	return 0;
}