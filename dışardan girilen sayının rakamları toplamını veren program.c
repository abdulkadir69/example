//DIÞARDAN GÝREN SAYININ RAKAMLARINI TOPLAYAN PROGRAM

#include<stdio.h>
#include<conio.h>
int main()
{
 int sayi,toplam=0,k,ilksayi;

 printf("sayi gir:");
 scanf("%d",&sayi);
 ilksayi=sayi;
 while (sayi>0){
 	k=sayi%10;
 	sayi=sayi/10;
 	toplam=toplam+k;
 }
 printf("%d",toplam);
 getch();
 
	
	
	
}
