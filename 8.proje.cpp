#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int son=6;
	int bosluk=1;
	
	for(int a=0;a<6;a++)
	{
		for (int a=0; a<bosluk;a++)
		printf(" ");
		
		for(int i=1; i<son;i++)
		printf("%d",i);
		
	bosluk++;
	son--;
	printf("\n");
	}
	
	int son2=5;
	int bosluk2=5;
	
	for(int a=1; a<6;a++)
	{
		for (int a=0;a<bosluk2;a++)
		printf(" ");
		
		for(int i=son2;i<6;i++)
		printf("%d",i);
		
		bosluk2--;
		son2--;
		
		printf("\n");
	}
		
getch();
}


