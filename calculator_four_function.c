#include <stdio.h>
#include <string.h>

double operation(double num1, double num2, char operator);

int main()
{
	char buf[20];
	int c;
	double num1;
	double num2;
	char operator;

	printf("Please enter your first number: ");
	if (fgets(buf, 20, stdin) == NULL)
		return -1;
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	else
		while ((c = getchar()) != EOF && c != '\n')
			;
	if (sscanf(buf, "%lf", &num1) == EOF)
		return -1;

	printf("Please enter your second number: ");
	if (fgets(buf, 20, stdin) == NULL)
		return -1;
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	else
		while ((c = getchar()) != EOF && c != '\n')
			;
	if (sscanf(buf, "%lf", &num2) == EOF)
		return -1;

	printf("Please enter your operation character (e.g. '+', '-', '*', '/'): ");
	if (fgets(buf, 20, stdin) == NULL)
		return -1;
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	else
		while ((c = getchar()) != EOF && c != '\n')
			;
	if (sscanf(buf, "%c", &operator) == EOF)
		return -1;

	printf("The result is: %0.2f\n", operation(num1, num2, operator));

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
		return (num1 / num2);

	return -1;
}
