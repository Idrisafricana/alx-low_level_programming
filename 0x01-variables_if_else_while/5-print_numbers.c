#include <stdio.h>
/**
 * main - program that prints all single digit from zero
 *
 * Return: 0 Always
 */
int main(void)
{
	int singledig;
	
	for (singledig = 0; singledig < 10; singledig++)
	{
		printf("%d", singledig);
	}
	printf("\n");
	return (0);
}
