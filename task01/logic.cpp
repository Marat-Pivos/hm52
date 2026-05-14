#include "logic.h"

int get_duplicates_of_numbers(int array[], int arrayresult[]) {
	int count = 0;

	for (int i = 0; i < SIZE;i++) {
		if (array[i] == array[i + 1]) {
			bool alreadyfound = false;
			for (int j = 0;j < count;j++) {
				if (arrayresult[j] == array[i]) {
					alreadyfound = true;
				}
			}
			if (!alreadyfound) {
				arrayresult[count] = array[i];
				count++;
			}								
			 break;							
		}
	}

	return count;
}