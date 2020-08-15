#include<stdio.h>
#define _CRT_SECURE_NO_WARNING
int main()
{
	long int a;
	scanf_s("%ld", &a);
	if (a >= 0 && a <= 11)
		printf("Kid");
	else if (a >= 12 && a <= 20)
		printf("Teen");
	else if (a >= 21 && a <= 60)
		printf("Adult");
	else if (a > 60)
		printf("Old");
}