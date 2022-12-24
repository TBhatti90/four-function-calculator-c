#include <stdio.h>
#include <conin.h>
#define BUFLEN 20

double operation(double num1, double num2, char operator);

int main()
{
	char buf[BUFLEN];
	double num1;
	double num2;
	double result;
	char operator;

	printf("Please enter your first number: ");
	if (conin(buf, BUFLEN) == -1)
	{
		printf("An error occurred, please try again\n");
		return -1;
	}

	if (sscanf(buf, "%lf", &num1) == 0)
	{
		printf("An error occurred, please try again\n");
		return -1;
	}

	printf("Please enter your second number: ");
	if (conin(buf, BUFLEN) == -1)
	{
		printf("An error occurred, please try again\n");
		return -1;
	}
	if (sscanf(buf, "%lf", &num2) == 0)
	{
		printf("An error occurred, please try again\n");
		return -1;
	}

	printf("Please enter your operation character (e.g. '+', '-', '*', '/'): ");
	if (conin(buf, BUFLEN) == -1)
	{
		printf("An error occurred, please try again\n");
		return -1;
	}
	if (sscanf(buf, "%c", &operator) == 0)
	{
		printf("An error occurred, please try again\n");
		return -1;
	}

	result = operation(num1, num2, operator);
	if (result == -1)
	{
		printf("An error occurred, please try again\n");
		return -1;
	}

	printf("The result is: %0.2f\n", result);

	return 0;
}

double operation(double num1, double num2, char operator)
{
	if (operator == '+')
		return (num1 + num2);
	else if (operator == '-')
		return (num1 - num2);
	else if (operator == '*')
		return (num1 * num1);
	else if (operator == '/')
	{
		if (num2 == 0)
			return -1;
		return (num1 / num2);
	}

	return -1;
}
