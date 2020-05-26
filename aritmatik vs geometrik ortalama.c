#include <stdio.h>
#include <conio.h>
#include <math.h>
    int i,n;
	float t=0,A[100],AO,GO,k=1;
void main()
{
clrscr();
printf("sayi=");
scanf("%d",&n);
for(i=0;i<n,i++){
	printf("A(%u)=",i+1);
	scanf("%f",&A[i]);
}
for(i=0;i<n;i++){
	t+=A[i]; k*=A[i];
}
AO=t/n; GO;pow(k,1.0/n);
printf("aritmatik ort.=%0.3f",AO);
printf("geometrik ort.=%0.3f",GO);
getch(); 	
	
}
