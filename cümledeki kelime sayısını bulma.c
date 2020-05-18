#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int  i=0,sayac=0;
    printf("cumle yaz : \n");
    gets(cumle);
    while(cumle[i])
    {
        if(cumle[i]==32)
        {
            sayac++;
        }
        i++;
    }
    printf("%d kelime var",sayac+1);
    return 0;
}
