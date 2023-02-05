//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
int bino(int n, int k){
    if(k == 0 || k == n){
        return 1;
    }
    return bino(n-1, k-1) + bino(n-1, k);
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", bino(n, k)%10007);
    return 0;
}