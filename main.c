#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("kac dk konustu:");
    scanf("%f",&a);
    if(a<=3)
    {
        printf("ucreti : 0.25 TL");
    }
    else
    {
        b=(a-3)*0.08+0.25;
        printf("ucreti : %f",b);
    }
    return 0;
}
