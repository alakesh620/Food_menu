#include<stdio.h>
int main()
{
	printf("food item :\n cost :\n") ;
	
	int choice=0;
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("food item :Pizza\n cost Rs: 239\n");
			case 2:
			printf("food item :Burger\n cost Rs: 129\n");
			case 3:
			printf("food item :Pasta\n cost Rs: 179\n");
			case 4:
			printf("food item :French fries\n cost Rs: 99\n");
			case 5:
			printf("food item :Sandwich\n cost Rs: 149\n");
			default : printf("invalid choice");
	}
}
