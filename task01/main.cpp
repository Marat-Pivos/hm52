#include "logic.h"

int main() {
	int array[SIZE];
	int arrayresult[1000];

	int count = get_duplicates_of_numbers(array);

	for (int i = 0; i < count;i++) {
		cout << arrayresult[i] << " ";
	}

	return 0;
}