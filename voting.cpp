#include<stdio.h>
int main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if(age<17)
	printf("\n person is not eligible for voting");
	else if (age<=18)
	printf("\n person eligible for voting");
	return 0;
	}

