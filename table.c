#include <stdio.h>
int main(){
    int i,n,c;
    printf(" enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        c=n*i;
        printf("%d*%d=%d\t",n,i,c);
    }
    return 0;
}
