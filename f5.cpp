/*
* FILE: f5.cpp
* PROJECT: SENG1000 - Focused Assignment 5
* PROGRAMMER: Virajsinh Dharmendrasinh Solanki
* FIRST VERSION: 2024-02-23
* DESCRIPTION: This program is used to determine the highest
*			   number out of the 10 number which the user inputs 
*			   with the use of functions.
* 
*/
#include <stdio.h> 
int getNum();
void modifyArrayValues(int[], int);
int maxArrayValue(int[], int);
//all the declared functions
int main(void) {
	int array[10] = {0};
	int index = 0;
	//array and variables initialized
	modifyArrayValues(array, 10);
    index = maxArrayValue(array, 10);
	printf("The highest value is %d at index %d", array[index],index);
	return 0;
}

/*
* FUNCTION :  modifyArrayValues
*
* DESCRIPTION : These Function is used to get the values 
				for all the elements in array.

* PARAMETERS : array[]: to store the value of the user inputs in the array.
*			   arraySize : this variable is the size of array
*		 
*
* RETURNS :   This funtion does not return any value.
*/
void modifyArrayValues(int array[], int arraySize) {
	int i = 0;
	printf("Please enter 10 integers, pressing ENTER after each one:\n");
	for (i = 0; i < arraySize; i++) {
		array[i] = getNum();
	}
}

/*
* FUNCTION :    maxArrayValue
*
* DESCRIPTION : These Function is used to get the highest value
				of all the elements in array.

* PARAMETERS : array[]: to store the value of the user inputs in the array.
*			   arraySize : this variable is the size of array
*
*
* RETURNS :   index: This is the index of the highest element in the array
*/
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