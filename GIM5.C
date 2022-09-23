#include<stdio.h>
#include<conio.h>

main()
{
 int choice, type;
 clrscr();

 printf("Press 1 for Sandwich\n");
 printf("Press 2 for Pizza\n");
 printf("Press 3 for Burger\n");

 printf("Enter your choice: ");
 scanf("%d", &choice);

 switch(choice)
 {
    case 1:  printf("You ordered a sandwich\n"); break;
    case 2:
	     printf("Press 1 for Fresh Dough Pizza\n");
	     printf("Press 2 for Thin Crust Pizza\n");
	     printf("Press 3 for Cheese Burst Pizza\n");

	     printf("Enter your type: ");
	     scanf("%d", &type);

	     switch(type)
	     {
		case 1:  printf("You ordered fresh dough pizza\n"); break;
		case 2:  printf("You ordered thin crust pizza\n"); break;
		case 3:  printf("You ordered cheese burst pizza\n"); break;
		default: printf("Invalid type....");
	     }

	     break;
    case 3:  printf("You ordered a burger\n");   break;
    default: printf("Invalid choice....");
 }

 getch();
}






