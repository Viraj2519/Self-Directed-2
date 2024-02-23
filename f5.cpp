
#include <stdio.h> 
int getNum();
void modifyArrayValues(int[], int);
int maxArrayValue(int[], int);

int main(void) {

	int array[10] = {0};
	modifyArrayValues(array, 10);
	int index = maxArrayValue(array, 10);
	printf("highest = %d", array[index]);
	return 0;
}


void modifyArrayValues(int array[], int arraySize) {
	array[10] = { 0 };
	int i = 0;
	printf("Please enter 10 integers, pressing ENTER after each one:\n");
	for (i = 0; i < arraySize; i++) {
		array[i] = getNum();
	}
}
int maxArrayValue(int array[], int arraySize) {
	int highestValue = 0;
	int index = 0;
	for (int i = 0; i < arraySize; i++) {

		if (i == 0 || array[i] > highestValue) {
			highestValue = array[i];
			index = i;
		}
	}
	return index;
}
#pragma warning(disable: 4996) // required by Visual Studio
int getNum(void) {
	/* the array is 121 bytes in size; we'll see in a later lecture how we can
	improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1) {
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}