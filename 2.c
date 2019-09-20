#include <stdio.h>
int main()
{
int a[4][4] = {{0},{0},{0},{0}};
int i,j;
for(i=0;i<=4;i++)
    for(j=0;j<=4;j++)
        printf("%d",a[i][j]);
    printf("\n");
return 0;
}
