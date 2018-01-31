#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the time in minute:");
scanf("%d",&a);
b=a/60;
c=a-(b*60);
printf("Time is hour and minute\n%d:%d",b,c);
}
