#include<stdio.h>
main()
{
	int i,sum=0,a,n;
	printf("Find te sum of digit.\n");
	printf("Enter your number:");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		a=n%10;
		n=n/10;
		sum=sum+a;
	}
	printf("The sum of each digit is:%d",sum);
}
