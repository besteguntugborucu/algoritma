#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int sinir=5;
	int bosluk=1;
	for(int a=0; a<5;a++)
	{
		for(int j=0;j<bosluk;j++)
		printf(" ");
		
		for(int i=sinir;i>=1;i--)
		printf("%d",i);
		
		for(int c=1;c<=sinir;c++)
		printf("%d",c);
	
		printf("\n");
		sinir--;
		bosluk++;
	}
	getch();
}
