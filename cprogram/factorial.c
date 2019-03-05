#include<stdio.h>
main()
{
	int i,a,res=1;
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		res=res*i;
	}
	printf("The result of factorial %d",res);
}
