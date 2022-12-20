#include<stdio.h>
#include<conio.h>

/*
	int varName = value;

	Format Specifiers :

	int	%d, %i
	float	%f
	char	%c

	Modulos
	% => remainder
	15 % 4	=> 3
*/

main() {
	int a = 15,b = 6,c;
	clrscr();
	c = a%b;
	printf("Sum of %i and %i = %d",a,b,c);
	getch();
}