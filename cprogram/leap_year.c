#include<stdio.h>
main()
{
	int a;
	printf("8.Leap year.\n");
	printf("Enter the year:");
	scanf("%d",&a);
	if (a%4==0)
	{
		printf("The year that you was enter was a leap year.");
	}
	else 
	{
		printf("The year that you was enter wasn't a leap year.");	
	}
}
