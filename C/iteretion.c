#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point of the code
 *
 * Return: An integer
 */
int main(void)
{
	int arr[] = {2, 5, 6, 7, 9, 0, 1, 56};
	size_t i;

	for (i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	return (0);
}
