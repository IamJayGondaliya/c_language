#include<stdio.h>
#include<conio.h>

/*
	Types of Operators:

	1. Arithmetic Operators
	   +, -, *, /, %, ++, --
			  (unary operators)

	2. Relational Operators
	   ==, <, >, <=, >=, !=

	3. Logical Operators
	   !, &&, ||

	4. Assignment Operators
	   =, +=, -=, *=, /=, %=

	5. Bitwise Operators
	   ~, ^, &, <<, >>

	6. Special(Misc.) Operators
	   &, *, ?: (ternary operator)
*/

/*
	Operator Precedence:
	    ---------------------------
	    Operator  |  Associativity
	    ----------|----------------
	       ()     |  ITO
	       %      |  LTR
	       *, /   |  LTR
	       +, -   |  LTR
	       =      |  RTL
	    ---------------------------
*/

/*
	Type Conversation(Type Casting):

		1. Implicit => Done by compiler itself.
		2. Explicit => We have to manually do it.
*/

main()
{
  int x, y, ans;
  clrscr();

  printf("Enter x: ");
  scanf("%d", &x);

  printf("Enter y: ");
  scanf("%d", &y);

  ans = (x*x) + (2*x*y) + (y*y);

  printf("Ans = %d", ans);

  getch();
}











