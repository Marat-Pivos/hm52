#include "logic.h"

int get_duplicates_of_numbers(int array[], int arrayresult[]) {
	int count = 0;

	for (int i = 0; i < SIZE;i++) {
		for (int k = i + 1; k < SIZE; k++) {
			if (array[i] == array[k]) {
				bool alreadyfound = false;
				for (int j = 0;j < count;j++) {
					if (arrayresult[j] == array[i]) {
						alreadyfound = true;
						break;
					}
				}
				if (!alreadyfound) {
					arrayresult[count] = array[i];
					count++;
				}

			}
		}
	}

	return count;
}