#include<stdio.h>
main()
{
	int Var1,Var2;
	printf("Enter number of Var1:");
	scanf("%d",&Var1);
	printf("Enter number of Var2:");
	scanf("%d",&Var2);
	if (Var1!=Var2)
	{
		printf("Var1 and Var2 is not equal.\n");
		if(Var1>Var2)
		{
			printf("Var1 is greater than Var2.\n");
			
		}
		else
		{
			printf("Var2 is greater than Var1.\n");
		}
		
	}
		
	else
		{
			printf("Var1 and Var2 is equal");
		}
}
