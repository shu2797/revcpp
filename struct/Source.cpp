#include <iostream>

using namespace std;

struct MyStruct
{
public:
	int ai[4];
	short j;
};

int main() {
	MyStruct* pOb = new MyStruct; //new creates an object and returns a pointer to that object
	MyStruct * pObArray = new MyStruct[4]; //uses default constructor for each object in array
	pOb->ai[2] = 3;
	pObArray[3].j = 5;
	pObArray[1].ai[3] = 5;
	delete pOb;
	delete[] pObArray; //delete[] to match new[]
	return 0;
}