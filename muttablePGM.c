#include<stdio.h>
void main()
{
int n,i,r;
printf ("ENTER THE NUMBER \n");
scanf("%d",&n);
printf ("ENTER THE RANGE \n");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
printf("MULTIPLICATION TABLE IS %d * %d = %d \n",n,i,i*n);
}
}
