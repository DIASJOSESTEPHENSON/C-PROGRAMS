#include<stdio.h>
void main()
{
int n,sum=0,i=1;
printf("ENTER THE LIMIT \n");
scanf("%d",&n);
do
{
sum=sum+i;
i++;
}
while(i<=n);
{
printf("SUM OF FIRST %d NATURAL NUMBER IS %d \n",n,sum);
}
}
