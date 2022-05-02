#include <stdio.h>
int max(arr);
int main(){
    int arr,l,max;
    int arr[]={6,8,2,0,5};
    int l=sizeof(arr);
    int max=arr[0];
    max(arr);
}
int max(arr){
    for (int i=0;i<l;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("The largest element in the array is:%d",max);
}