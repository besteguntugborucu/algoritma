#include<stdio.h>
#include <conio.h>
main()
{
int sayi1,sayi2,secim;
printf("birinci sayiyi girin");
scanf("%d",&sayi1);

printf("ikinci sayiyi girin");
scanf("%d",&sayi2);

printf("1.toplama\n");
printf("2.cýkarma\n");
printf("gerceklesecek islem(1&2):");

scanf("%d",&secim);

if(secim==1)
printf("%d",sayi1+sayi2);

else if(secim==2)
printf("%d",sayi1-sayi2);

else
printf("yanlis sayi girildi");
getch();
}
