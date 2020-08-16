#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int age;
	scanf("%d", &age);
	if (age > 0 && age <= 10)
		printf("Children");
	else if (age > 10 && age <= 20)
		printf("Teenage");
	else if (age > 20 && age <= 35)
		printf("Adult");
	else if (age > 35 && age <= 55)
		printf("Middle age");
	else if (age > 55)
		printf("Old age");
}