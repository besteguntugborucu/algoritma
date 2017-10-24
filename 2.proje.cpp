#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int adet=7;
	for(int i=1; i<7;i++)
	{
		for(int j=0;j<adet;j++)
		printf("*");
		printf("\n");
		adet--;
	}
	getch();
}
