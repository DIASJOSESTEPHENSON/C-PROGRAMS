#include <stdio.h>
int fibo(int);
int main()
{
int num;
int result;
printf("ENTER THE Nth NUMBER OF THE FACTORIAL \n");
scanf("%d", &num);
if (num < 0)
{
printf("NEGATIVE NUMBER\n");
}
else
{
result = fibo(num);
printf("THE %dth NUMBER IN FIBONACCI SERIES IS: %d\n", num, result);
}
return 0;
}
int fibo(int num)
{
if (num == 0)
{
return 0;
}
else if (num == 1)
{
return 1;
}
else
{
return(fibo(num - 1) + fibo(num - 2));
}
}
