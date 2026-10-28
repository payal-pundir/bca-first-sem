#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    int sqaure,cube;
    printf(" enter the number");
    scanf("%d",&n);
   
    printf("\ni,\tsqaure\tcube\n");
    for(i=1;i<=n;i++){
     sqaure=pow(i,2);
    cube=pow(i,3);
    printf("%d\t %d\t %d\n",i,sqaure,cube); }

    return 0;
}
