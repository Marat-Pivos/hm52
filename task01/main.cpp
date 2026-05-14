#include "logic.h"

int main() {
	int array[SIZE];
	int arrayresult[1000];

	srand(time(0));

	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 20; 
	}

	int count = get_duplicates_of_numbers(array, arrayresult);

	for (int i = 0; i < count;i++) {
		cout << arrayresult[i] << " ";
	}

	return 0;
}