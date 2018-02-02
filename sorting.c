#include<stdio.h>
void main()
{
int a[100],n,i,j;
int t;
printf("\nEnter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i< n;i++)
{
printf("\nThe sorted elements are %d",a[i]);
}
}
