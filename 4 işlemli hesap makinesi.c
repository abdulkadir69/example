#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b;
  char op;
  printf("operatoru gir:\n");
  scanf("%c",&op);
  printf("sayi gir:\n");
  scanf("%d",&a);
  printf("yine sayi gir:\n");
  scanf("%d",&b);

  switch (op){
  case '+':printf("%d",a+b);
  break;
  case '-':printf("%d",a-b);
  break ;
  case '*':printf("%d",a*b);
  break;
  case '/':printf("%d",a/b);
  break;

  }
  }
