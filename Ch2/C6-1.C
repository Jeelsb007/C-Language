#include<stdio.h>
#include<conio.h>
/*
	Control Structure :
		- if
		- if else
		- ladder
		- nested
		- switch
		- ternory
	Condition :
		Conditional operators : <, <=, >, >=, ==, !=
		Logical operators     : &&, ||, !

	- if(condition)
	  {
		//True
		//Statements
	  }
	  else if(condition)
	  {
		//True
		//Statements
	  }
	  .
	  .
	  .
	  else
	  {
		//Else
		//Statements
	  }

	  1-10
	  10 -20
*/
main()
{
	char a;
	clrscr();

	printf("Enter any character : ");
	scanf("%c",&a);

	if(a >= 'A' && a <= 'Z')
	{
	   printf("A is UPPERCASE.");
	}
	else if(a >= 'a' && a <= 'z')
	{
	   printf("A is lowercase.");
	}
	else if(a >= '0' && a<='9')
	{
	   printf("A is digit.");
	}
	else
	{
	   printf("A is special character.");
	}

	getch();
}





