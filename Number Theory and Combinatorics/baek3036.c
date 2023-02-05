//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
#include <malloc.h>
int gcd(int a, int b);
int main(){
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i<n; i++){
        if(arr[0]%arr[i] == 0){
            printf("%d", arr[0]/arr[i]);
            printf("/1\n");
        }else{
            int gcdn = gcd(arr[0] > arr[i] ? arr[0]:arr[i], arr[0] > arr[i] ? arr[i] : arr[0]);
            printf("%d/%d\n", arr[0]/gcdn, arr[i]/gcdn);
        }
    }
    return 0;
}
int gcd(int a, int b) {
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}