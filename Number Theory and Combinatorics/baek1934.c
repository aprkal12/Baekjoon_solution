//
// Created by DH on 2023-02-03.
//
// 유클리드 호제법을 쓰라는데 걍 이렇게 해도 맞음;;
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        int n1,n2;
        scanf("%d %d", &n1, &n2);
        int mmul = 0;
        if(n1 > n2){
            for(int i = 1; i<=n1; i++){
                if(n2*i >= n1 && n2*i % n1 == 0){
                    mmul = n2*i;
                    break;
                }
            }
        }else{
            for(int i = 1; i<=n2; i++){
                if(n1*i >= n2 && n1*i % n2 == 0){
                    mmul = n1*i;
                    break;
                }
            }
        }
        printf("%d\n", mmul);
    }
    return 0;
}