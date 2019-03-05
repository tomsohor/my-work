#include<stdio.h>
main()
{
	int R=1,S=2,P=3,z,l;
	int p=0,c=0,i;
	int com;
	printf("Note Rock=1 Scissors=2 Paper=3\n");
	while (i<=0)
		{
			printf("Enter your choice:");
			scanf("%d",&z);
			if(z<1 || z>3 )
			printf("Stupid Guy\n");
			com=rand()%3;
			if(com==1)
			{
				switch (z)
				{
					case 1:printf("computer choice:%d\n",com);
							printf("No one win\n");
							printf("computer score:%d\n",c);	
							printf("your score:%d\n",p);	
							break;
					case 2:printf("computer choice:%d\n",com);
							printf("You lose\n");
							c=c+1;
							printf("computer score:%d\n",c);	
							printf("your score:%d\n",p);	
							break;
					case 3:printf("computer choice:%d\n",com);
							printf("You win\n");
							p=p+1;
							printf("computer score:%d\n",c);	
							printf("your score:%d\n",p);	
							break;	
				}
			}
			else if(com==2)
			{
				switch (z)
				{
					case 1:printf("computer choice:%d\n",com);
						printf("You win\n");
							p=p+1;
							printf("computer score:%d\n",c);	
							printf("your score:%d\n",p);	
							break;
					case 2:printf("computer choice:%d\n",com);
					printf("No one win\n");
							printf("computer score:%d\n",c);	
							printf("your score:%d\n",p);	
							break;
					case 3:printf("computer choice:%d\n",com);
					printf("You lose\n");
							c=c+1;
							printf("computer score:%d\n",c);	
							printf("your score:%d\n",p);	
							break;	
				}
			}
			else{
			
				if(com==3)
				{
					switch (z)
					{
						case 1:printf("computer choice:%d\n",com);
						printf("You lose\n");
								c=c+1;
								printf("computer score:%d\n",c);	
								printf("your score:%d\n",p);	
								break;
						case 2:printf("computer choice:%d\n",com);
						printf("You win\n");
								p=p+1;
								printf("computer score:%d\n",c);	
								printf("your score:%d\n",p);	
								break;
						case 3:printf("computer choice:%d\n",com);
						printf("No one win\n");
								printf("computer score:%d\n",c);	
								printf(" your score:%d\n",p);	
								break;	
			
					}
		
			}
		 
		}
		printf("Do you want to play again or not? (y/n):");
		 scanf("%d",&l);
		 if(l=='y')
		 i=0;
		 if(l=='n')
		 i=1;
	}
}


