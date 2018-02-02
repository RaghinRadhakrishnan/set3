#include<stdio.h>
void main()
{
int n,a[n],i,temp,j;
printf("\nEnter the number of elements");
scanf("%d",&n); 
printf("\nEnter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<(n/2)+1;i++)
{
if(i==n/2)
{
printf("\n The median is %d",a[i]);
}
}
}
