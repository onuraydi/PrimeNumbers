#include <stdio.h>

//Write a C program that prints out the prime numbers between 1 and 200. 
//The output should be such that each row contains a maximum of 20 prime numbers.

int is_Prime(int number)
{
	int i,counter = 0;
	for(i = 1; i <= number; i++)
	{
		if(number % i == 0)
		{
			counter++;
		}
	}
	if(counter == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int i,counter;
	for(i = 2; i <= 200; i++)
	{
		if(is_Prime(i))
		{
			printf("%d - ",i);
			counter++;
			if(counter % 20 == 1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
