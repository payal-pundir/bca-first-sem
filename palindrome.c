#include <stdio.h>
int main(){
    int n,digit,original,reverse;
    printf("enter the number");
    scanf("%d", &n);
    original=n;
    while(n!=0){
        n=n%10;
        reverse =reverse*10+digit;
        n=n/10;
        
    }
    if(original==reverse){
        printf("palindome");
    }
        else{
            printf("not palindrome");
        }
    return 0;
}
