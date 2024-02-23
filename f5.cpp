
#include <stdio.h> 
#define maxValue 10;
int getNum();
int modifyArrayValues(int[]);

int main(void) {
	int array10Numbers[10] = { 0 };
	int i = 0;
	int index = 0;
	int highestValue = 0;

	printf("Please enter 10 integers, pressing ENTER after each one:\n");

	
		printf("The highest value is %d at index %d\n", highestValue, index);
	
}

int modifyArrayValues(int array[maxValue]) {
	for (i = 0; i < 10; i++) {
		array10Numbers[i] = getNum();
	}
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
