/*
Author	 : Myungjun Kim
Contents : Solve a system of linear equations using Gauss-Jordan Elimination, and print each step.
*/

#define _CRT_SECURE_NO_DEPRECATE // Required to use scanf() without warnings

/* Header files */
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void createSystem(double** system);
int getSizeOfSystem(void);
void getValuesOfSystem(double** system, int size);

/* Main function */
int main(void)
{
	double** system;

	createSystem(system);

	free(system);
}

/* Create system of linear equations */
void createSystem(double** system)
{
	int size, pointerBytes, dataBytes;
	size = getSizeOfSystem();

	pointerBytes = size * sizeof(double *);  // Rows of extended coefficient matrix
	dataBytes = (size + 1) * sizeof(double); // Columns of extended coefficient matrix
	if ((system = (double **)malloc(pointerBytes + dataBytes)) == NULL)
		exit(EXIT_FAILURE); // Exit if memory allocation fails

	getValuesOfSystem(system, size);
}

/* Designate size of system (user input) */
int getSizeOfSystem(void)
{
	int equations = 0, scanResult = 0;

	while (1)
	{
		printf("Type the number of equations: ");
		scanResult = scanf("%d", &equations);

		if (!(equations <= 0 || scanResult != 1))
			break;

		printf("That entry is invalid. Enter the number of equations: ");
	}

	return equations;
}

/* Enter coefficients and solution values (user input) */
void getValuesOfSystem(double** system, int size)
{
	printf("Please enter the coefficients of each equation as comma-separated numbers, then hit enter."
		"Consult the following example as to format. If the equation is 2x^2 + 3x + 4 = 5, type 2,3,4,5 and hit enter.\n");

	for (int i = 0; i < size; i++)
	{

	}

}

/* Find rref form of extended coefficient matrix */
/* Row multiplication with scalar (pointers) */
/* Row addition (pointers) */
/* Row exchange (pointers) */

/* Find solution from rref form of extended coefficient matrix */

/* Print extended coefficient matrix */
/* Print solution to system */