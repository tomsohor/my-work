#include <stdio.h>
//main()//largest number
//{ 
// 
//        int array[5],i, largest;
//        printf("Enter elements of  the array: \n");
//        for (i = 0; i < 5; i++)
//		scanf("%d", &array[i]);
//        largest = array[0];
//        for (i = 1; i < 5; i++) 
//        {
//		if (largest < array[i])
//			largest = array[i];
//	}
// 
//        printf("\n largest element of array is : %d", largest);
//}
//main()
//{
// 
//        int array[5],i, largest;
//        printf("Enter elements of  the array: \n");
//        for (i = 0; i < 5; i++)
//		scanf("%d", &array[i]);
//        largest = array[0];
//        for (i = 1; i < 5; i++) 
//        {
//		if (largest > array[i])
//			largest = array[i];
//	}
// 
//        printf("\n largest element of array is : %d", largest);
//}
//main()//fibonacci
//{
//	int a[50],i,d;
//		a[0]=1;
//	printf("%d\n",a[0]);
//		a[1]=1;
//	printf("%d\n",a[1]);
//	for(i=2;i<=10;i++)
//	{
//	
//		a[i]=a[i-1]+a[i-2];
//		d=a[i];
//		printf("%d\n",d);	
//	}
//
//}
//main()//digit of number
//{
//	int i,j=0;
//	scanf("%d",&i);
//	while (i!=0)
//	{
//		i=i/10;
//		j++;
//	}
//	printf("%d",j);}
//main()//palindrome
//{
//	int a,b=0,c;
//	printf("Enter your number:");
//	scanf("%d",&a);
//	c=a;
//	while(c!=0)
//	{
//		b=b*10;
//		b=b+c%10;
//		c=c/10;	
//	}
//	if (a==b)
//	{
//		printf("%d is palindrome.",b);
//	}
//	else
//	{
//		printf("The given number isn't palindrome.");
//	}
//}
//main()//reverse
//{
//	int a,b[10],c,d=0;
//	printf("Enter your number:");
//	scanf("%d",&a);
//	while(a!=0)
//	{
//		
//		b[d]=a%10;
//		a=a/10;
//		printf("%d",b[d]);
//		d++;
//	}

//}
//#include<math.h>
//main()//armstrong number
//{
//	int a,b[10],c=0,d=0,e,f,g;
//	printf("Enter your number:");
//	scanf("%d",&g);
//	a=g;
//	while(a!=0)
//	{
//		b[d]=a%10;
//		printf("%d ",b[d]);
//		a=a/10;	
//		f++;
//		d++;
//	}
//    for(e=0;e<f;e++)
//    {    	b[e]=pow(b[e],f);
//		printf("\n%d",b[e])	;
//		c=c+b[e];
//
//	
//	}
//		printf("\n%d",c);
//	if(g==c)
//		printf(" so the given number is armstrong number.");
//	else
//		printf(" so the given number isn't armstrong number.");
//	
//}
main()//fibonacci
{
	int i,a,b,c;
	printf("Enter Zero & One:\n");
	scanf("%d",&a);
	scanf("%d",&a);
	for(i=0;i<=10;i++)
	{
	
		c=c+a;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}


