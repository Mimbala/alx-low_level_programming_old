#include "stdio.h"
#include "stdlib.h"

/**
 * main - function
 * @argc: lenght of argv
 * @argv: number of argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	/*declaring variables*/
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]); /*Covert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	/*declaring WHILE*/

	while (coins[position] != '\0')

	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}

		position++;

	}
	printf("%d\n", change);
	return (0);
}

