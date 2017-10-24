#include<stdio.h>
#include <conio.h>
main()
{
int sayi1,sayi2,sayi3,sayi4,sayi5,enbuyuk;
printf("birinci sayiyi girin");
scanf("%d",&sayi1);

printf("ikinci sayiyi girin");
scanf("%d",&sayi2);

printf("ucuncu sayiyi girin");
scanf("%d",&sayi3);

printf("dorduncu sayiyi girin");
scanf("%d",&sayi4);

printf("besinci sayiyi girin");
scanf("%d",&sayi5);

enbuyuk=sayi1;

if(sayi2>enbuyuk)
enbuyuk=sayi2;

if(sayi3>enbuyuk)
enbuyuk=sayi3;

if(sayi4>enbuyuk)
enbuyuk=sayi4;

if(sayi5>enbuyuk)
enbuyuk=sayi5;

printf("Girdiginiz sayilardan en buyuku %d dir",enbuyuk);

getch();
}
