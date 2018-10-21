#include<stdio.h>
void main()
{
int n,p,i;
printf("ENTER A NUMBER \n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
p=i*n;
if(i==p)
continue;
printf("%d * %d =%d \n",i,n,p);
}
}
