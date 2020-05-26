#include<stdio.h>
int main()
{
int vize1,vize2,final;
float okulortalama;
float dersort;

printf("1. vizeyi giriniz:");
scanf("%d",&vize1);
printf("2. vizeyi giriniz:");
scanf("%d",&vize2);
printf("finali giriniz:");
scanf("%d",&final);
printf("okul ort. gir:");
scanf("%f",&okulortalama);
dersort=(vize1*3/10.0+vize2*3/10.0+final*4/10.0);

    if (dersort>=90){
	  printf("harf notunuz AA ve ders ort.:%f",dersort);
	  }
    else if (dersort>=85 && dersort<90){
	  printf("harf notunuz BA ve ders ort:%f",dersort);
	  
	  }
	else if (dersort>=80 && dersort<85){
	  printf("harf notunuz BB ve ders ort:%f",dersort);
	  
	  }
	else if (dersort>=75 && dersort<80){
	  printf("harf notunuz BA ve ders ort:%f",dersort);
	  
	  }
	else if (dersort>=70 && dersort<75){
	  printf("harf notunuz BC ve ders ort:%f",dersort);
	  
	  }
	else if (dersort>=65 && dersort<70){
	  printf("harf notunuz CC ve ders ort:%f",dersort);
	  
    if (okulortalama<2.5){
	printf("dersi tekar alman lazým ");
	}
}
    else { printf("harf notunuz FF ve ders otr.:\n",dersort);
           printf("dersten kaldýnýz");
	}
	
return 0;	
	
}
