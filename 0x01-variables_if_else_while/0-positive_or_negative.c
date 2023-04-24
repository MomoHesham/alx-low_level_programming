#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Description: 'Positive or Negative'
 *
 * Return: always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n>0){
		printf("is positive");
	}
	else if(n<0){
		printf("is negative");
	}
	else {
		printf("is zero");
	}
	return (0);
}
