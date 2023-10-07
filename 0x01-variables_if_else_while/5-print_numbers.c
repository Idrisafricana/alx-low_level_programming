#include <stdio.h>i

/**
 * main - program that prints all single digit from zeror
 *
 * Return: Always 0.
 */
int main(void)
{
	int singledig;
	
	for (singledig = 0; singledig < 10; singledig++){
		printf("%d", singledig);
	}
	printf("\n");
	return (0);
}
