#include<stdio.h>
void main()
{
int i,j,c[100],n,t;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(c[i]>c[j])
{
t=c[i];
c[i]=c[j];
c[j]=t;
}
}
for(i=0;i<n;i++)
{
printf("%d",c[i]);
}
}
