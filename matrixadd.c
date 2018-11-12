#include <stdio.h>
int main()
{
int m, n, c, d, first[10][10], second[10][10], sum[10][10];
printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF MATRIX \n");
scanf("%d%d", &m, &n);

printf("ENTER THE ELEMENTS OF FIRST MATRIX \n");
for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
scanf("%d", &first[c][d]);

printf("ENTER THE ELEMENTS OF SECOND MATRIX \n");  
for (c = 0; c < m; c++)
for (d = 0 ; d < n; d++)
scanf("%d", &second[c][d]);

printf("MATRIX SUM: \n");
for (c = 0; c < m; c++) 
{
for (d = 0 ; d < n; d++) 
{
sum[c][d] = first[c][d] + second[c][d];
printf("%d \t", sum[c][d]);
}
printf("\n");
}
return 0;
}


