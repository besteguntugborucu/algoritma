#include<stdio.h>
#include <conio.h>
main()
{
int sayi=0;
printf("Haftanin gun sayisini gir");
scanf("%d",&sayi);
switch(sayi)

{
	case1:
		printf("pazartesi");break;
		
	case2:
		printf("sali");break;
		
	case3:
		printf("carsamba");break;
		
	case4:
		printf("persembe");break;
		
	case5:
		printf("cuma");break;
		
	case6:
		printf("cumartesi");break;
		
	case7:
		printf("pazar");break;
		
	default:
		printf("oyle gun yok");break;
}

getch();
}
