#include<stdio.h> 
long factorial(int);
int main()
{
int n;
long f;
printf("ENTER THE NUMBER TO FIND THE FACTORIAL\n");
scanf("%d",&n);
if (n<0)
printf("FACTORIAL NOT DEFINED\n");
else
{
f=factorial(n);
printf("%d = %ld \n",n,f);
}
return 0;
}
long factorial(int n)
{
if(n==0)
return 1;
else
return(n*factorial(n-1));
}
