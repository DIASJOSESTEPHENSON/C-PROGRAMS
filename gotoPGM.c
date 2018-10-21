#include<stdio.h>
void main()
{
int i;
int sum=0;
for(i=1;i<=10;i++)
{
sum=sum+i;
if(i==sum)
goto label;
}
label:printf("SUM IS %d \n",sum);
}


