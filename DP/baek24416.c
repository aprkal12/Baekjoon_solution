//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
int arr[40]={0,};
int n;
int count1, count2 = 0;
int recurfibo(int n){
    if(n == 1 || n == 2){
        count1++;
        return 1;
    }
    return recurfibo(n-1) + recurfibo(n-2);
}
int dpfibo(int n){
    arr[1] = arr[2] = 1;
    for(int i = 3; i<=n; i++){
        arr[i] = arr[i-1]+arr[i-2];
        count2++;
    }
}
int main(){
    scanf("%d", &n);
    dpfibo(n);
    recurfibo(n);
    printf("%d %d",count1, count2);
    return 0;
}