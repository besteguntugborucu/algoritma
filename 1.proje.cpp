#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int sayi=0;
	srand(time(NULL));
	sayi=5+rand()%100;
	sayi=3+rand()%5;
	
	printf("%d\n",sayi);
getch();
}
