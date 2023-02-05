//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
#include <malloc.h>
#include <math.h>
// 유클리드 호제법과 그 법칙을 활용해야 하는 문제
// 아래와 같이 브루트 포스 방식으로 풀면 시간초과 난다.
int main(){
    int n;
    int result = 0;
    int idx = 0;
    scanf("%d", &n);
    int * arr = (int*)malloc(sizeof(int)*n);
    int *sol = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 2; i<=arr[0]; i++){
        int tar = arr[0] % i;

        for(int j = 0; j<n; j++){
            if(arr[j] % i != tar){
                result = 0;
                break;
            }else{
                result = i;
            }
        }
        if(result != 0){
            sol[idx++] = result;
        }
    }

    for(int i = 0; i<idx; i++){
        printf("%d ", sol[i]);
    }

    return 0;
}