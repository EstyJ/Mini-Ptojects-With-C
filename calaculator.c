#include<stdio.h>

int main() {
	
	char symbol;
	printf("Enter your symbol \n ['+', '-', '/', '*']: ");
	scanf("%c", &symbol);
	
	double num1,num2;
	printf("Enter your Numbers \n");
	
	printf("Number 1: ");
	scanf("%lf", &num1);
	
	printf("Number 2: ");
	scanf("%lf", &num2);
	
	double result;
	
	switch(symbol)
	{
		case '+':
		result = num1+num2;
		printf("%lf + %lf = %lf", num1, num2, result);
		break;
		
		case '-':
		result = num1-num2;
		printf("%lf - %lf = %lf", num1, num2, result);
		break;
		
		case '/':
		result = num1/num2;
		printf("%lf ÷ %lf = %lf", num1, num2, result);
		break;
		
		case '*':
		result = num1 * num2;
		printf("%lf x %lf = %lf", num1, num2, result);
		break;
		
		default:
		printf("Invalid symbol");
	}
	
	return 0;
}

