//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int)*n);
    int max = 0;
    int min = 1000000;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d", max*min);
    return 0;
}