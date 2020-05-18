#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,para = 1000;;
    printf("Hangi islemi yapmak istiyorsunuz :\nHesaptaki paraniz:1000\n1. Hesaba para yatirma\n2. Hesaptan para cekme\n3. Iptal\n ");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Ne kadar yatirmak istiyorsunuz:\n");
        scanf("%d",&b);
        printf("Hesabinizdaki para : %d",para+b);
    }
    else if (a==2)
    {
        printf("Ne kadar para cekmek istiyorsunuz :");
        scanf("%d",&c);
        if (c <= para)
        {
        printf("hesabininzdaki para : %d",para-c);
        }
        else
        {
            printf("fazla mikarda para girdiniz");
        }
    }
    else if (a==3)
    {
        printf("iyi gunler dileriz :)");
    }
    else
    {
        printf("yanlis sayi girdiniz");
    }
    return 0;
}
