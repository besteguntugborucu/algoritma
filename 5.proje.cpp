#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int adet=9;
	int bosluk=1;
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<bosluk;j++)
		printf(" ");
		for(int a=0;a<adet;a++)
		printf("*");
		
		
		adet-=2;
		bosluk++;
		printf("\n");
	}
	
	adet=1;
	bosluk=5;
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<bosluk;j++)
		printf(" ");
		for(int a=0;a<adet;a++)
		printf("*");
		
		
		adet+=2;
		bosluk--;
		printf("\n");
	}
	getch();
}
