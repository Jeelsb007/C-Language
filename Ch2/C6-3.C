#include<stdio.h>
#include<conio.h>

/*

	Switch case :
		switch == ladder
		- int , char

	syntax :

		switch(varName)
		{
			case optionOne :
				// Statement(s)
				break;
			case optionTwo :
				// Statement(s)
				break;
			.
			.
			default :
				//Statement(s)
				[ break; ]
		}

		goto Statement :
			- it's being used to jump the curser at desired
			  location in code.
			- we have to put the label from where we wants to
			  start again.
		syntax :

			label:

			goto label;
*/

main()
{
	int choice,bill = 0;
	clrscr();

	tmp:
	printf("Enter 1 for Pizza\n");
	printf("Enter 2 for Burger\n");
	printf("Enter 3 for Panipuri\n");
	printf("Enter 4 for Ice-cream\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("Enter 1 for Margherita\t\t350\n");
			printf("Enter 2 for Seven cheesy\t450\n");
			printf("Enter 3 for Thin crust\t\t300\n");
			printf("Enter your choice: ");
			scanf("%d",&choice);

			clrscr();
			switch(choice)
			{
				case 1:
					printf("You have ordered Margherita...");
					bill += 350;

					printf("\n\nPress 1 for order more\n");
					printf("Press 0 for bill\n");
					printf("Enter your choice : ");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}

					break;
				case 2:
					printf("You have ordered Seven cheesy...");
					bill += 450;
					break;
				case 3:
					printf("You have ordered Thin crust...");
					bill += 300;
					break;
				default:
					printf("Invalid choice.");
			}

			break;
		case 2:
			printf("You have ordered Burger.....");
			break;
		case 3:
			printf("You have ordered Panipuri");
			break;
		case 4:
			printf("You have ordered Ice-cream....");
			break;
		default:
			printf("Invalid choice");
	}

	printf("\n\nYour bill : %d",bill);

	getch();
}






