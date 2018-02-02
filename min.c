#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);                                                  
a<b?(a<c?printf("\n%d is small",a):printf("\n%d is small",c)):b<c?printf("\n%d is small",b):printf("\n%d is small",c); 
}
