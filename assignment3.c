#include <stdio.h>
int EvenOdd(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    EvenOdd(n);
}
int EvenOdd(int n){
    if (n%2==0){
        printf("%d is EVEN",n);
    }
    else{
        printf("%d is ODD",n);
    }
}