#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int adet=1;
	int bosluk=17;
	for(int i=0; i<5;i++)
	{
		for(int a=0;a<adet;a++)
		printf("*");
		for(int j=0;j<bosluk;j++)
		printf(" ");
		for(int a=0;a<adet;a++)
		printf("*");
		
		
		adet+=2;
		bosluk-=4;
		printf("\n");
	}
	getch();
}
