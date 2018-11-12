#include<stdio.h>
void inc(int);
void incr(int *);
main()
{
int a=10,b=10;
printf("\n");
printf("CALL BY VALUE \n");
printf("a=%d \n",a);
inc(a);
printf("after calling inc(a) \n");
printf("a=%d \n",a);
printf("\n");
printf("CALL BY REFERENCE \n");
printf("b=%d \n",b);
incr(&b);
printf("after calling incr(b) \n");
printf("b=%d \n",b);
}
void inc(int d)
{
d++;
printf("X=%d \n",d);
}
void incr(int *p)
{
(*p)++;
}
