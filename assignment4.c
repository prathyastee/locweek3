#include <stdio.h>
int swap(int a,int b);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    printf("\nBEFORE SWAPPING:a=%d, b=%d",a,b);
    swap(a,b);

}
int swap(int a,int b){
    int x;
    x = a;
    a=b;
    b=x;
    printf("\nAFTER SWAPPING:a=%d, b=%d",a,b);
}