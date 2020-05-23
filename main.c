#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int a,b;
    printf("operator gir(+ / -):\n");
    scanf("%c",&op);
    printf("iki sayi gir:");
    scanf("%d%d",&a,&b);
    if ( (a==0) || (b==0) )
    {
        printf("islem gecersiz");
    }
    else
     {printf("1/%d %c 1/%d = ",a,op,b);

      switch(op)
      {
  case '+' :
    {
        printf("%d/%d",a+b,a*b);
    }
    break;
  case '-' :
    {
        printf("%d/%d",a-b,a*b);
    }
    break;
  default:
    {
        printf("yanlis sayi girdiniz");
    }
    }}
    return 0;
}
