#include<stdio.h>

// Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping

#include<stdio.h>
	int addition (int x , int y)
	{
		return x+y;
	}
	int substraction (int x , int y)
		{
		return x-y;
	}
	void multiplication (int x, int y)
	{
		printf("multiplication = %d",x*y);
	}
	void division (int x, int y)
	{
		printf("division = %d",x/y);
	}
	void module (int x, int y)
	{
		printf("module = %d",x%y);
	}

main() 
{
int n,a,b;
	do{
		printf("\n_____________________________\n");
		printf("Press 1 for addition\n");
		printf("Press 2 for substraction\n");
		printf("Press 3 for multiplication\n");
		printf("Press 4 for division\n");
		printf("Press 5 for module\n");
		printf("Press 0 for the exit\n");

		printf("enter selected number =");
		scanf("%d",&n);

		if(n>=1 && n<6){

			printf("enter any value  A =");
			scanf("%d",&a);
			printf("enter any value  B =");
			scanf("%d",&b);

        switch(n){

				case 1:
					printf("addition = %d",addition(a,b));
					break;

				case 2:
					printf("substraction = %d",substraction(a,b));
					break;

				case 3:
					multiplication (a,b);
					break;

				case 4:
					division (a,b);
					break;

				case 5:
					module(a,b);
					break;

			}
		}

	}while(n!=0);
}

