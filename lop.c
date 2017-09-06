# include<stdio.h>
void main()
{
int i=0,j,n,b,a[50];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(i==0)
{
for(j=1;j<n-1;j++)
{
b=a[i]+a[j];
a[i]=b;
}}
printf("the sum of n number is:",b);
}


