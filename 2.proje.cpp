#include<stdio.h>
#include <conio.h>
main()
{
	int sayi=0;
	int tane=0;
	printf("sayi girin");
	scanf("%d",sayi);
	for(int i=50; i<200;i++)
	if(i%sayi==0)
	
	tane++;
	
	printf("%d tane sayiyi kalansiz bolunur",tane);
getch();
}
