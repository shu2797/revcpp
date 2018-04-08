#include <iostream>

using namespace std;

int main() {
	auto i = 5; //integer variable i (auto takes type int)
	void* p = &i; //void pointer storing address of i
	cout << p << "\n"; //print pointer (address of i)
	cout << (int*)p << "\n"; // print pointer (address of i)
	cout << *(int*)p; //dereference using typecasting and print value of i
	cin.ignore();
	return 0;
}