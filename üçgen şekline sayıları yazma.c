#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i=1,j=1;
    printf("sayi giriniz :\n");
    scanf("%d",&a);

    while(i<=a)
    {
     j=1;
     while(i>=j)
     {
        printf("%d",j);
        j++;
     }
     printf("\n");
     i++;
    }
    return 0;
}
