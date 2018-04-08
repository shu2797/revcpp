#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	char ac[10];
	int ai[10];

	for (int i = 0; i<10; i++) {
		printf("Index %d at %10p %10p\n", i, &(ac[i]), &(ai[i]));
	}



	printf("\nsizeof(char) = %d\n", sizeof(char));
	for (int i = 0; i < 9; i++) {
		printf("Difference ac[i+1]-ac[i]: %x - %x = %d\n", (int)&(ac[i + 1]), (int)&(ac[i]), (int)&(ac[i + 1]) - (int)&(ac[i]));
	}

	printf("\nsizeof(int) = %d\n", sizeof(int));
	for (int i = 0; i < 9; i++) {
		printf("Difference ac[i+1]-ac[i]: %x - %x = %d\n", (int)&(ai[i + 1]), (int)&(ai[i]), (int)&(ai[i + 1]) - (int)&(ai[i]));
	}


	short as[] = { 1,7,9,4 };
	short* ps = as;
	printf("\n%d\n", *ps);

	cin.ignore();
}