#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - function that creates an infinite loop to make
 * the program hang
 * Return: 0 always
*/

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - function that creates 5 zombie processes
 * Return: 0 always
*/

int main(void)
{
	int i;
	pid_t zombie;

	for (i = 0; i < 5; i++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
	}

	infinite_while();
	return (0);
}
