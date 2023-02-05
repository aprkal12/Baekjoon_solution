//
// Created by DH on 2023-02-03.
//

// https://imkh.dev/algorithm-gcd-lcm/ 이 사이트 공부해보기 ( 유클리드 호제법 )
#include <stdio.h>

int main(){
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);
    int mfac=0;
    int mmul = 0;
    if(n1> n2){
        for(int i = 1; i<=n2; i++){
            if(n2 %i ==0 && n1 % i == 0 && mfac < i){
                mfac = i;
            }
        }
        for(int i = 1; i<=n1; i++){
            if(n2*i >= n1 && n2*i % n1 == 0){
                mmul = n2*i;
                break;
            }
        }
    }else{
        for(int i = 1; i<=n1; i++){
            if(n1 %i ==0 && n2 % i == 0 && mfac < i){
                mfac = i;
            }
        }
        for(int i = 1; i<=n2; i++){
            if(n1*i >= n2 && n1*i % n2 == 0){
                mmul = n1*i;
                break;
            }
        }
    }
    printf("%d\n%d", mfac, mmul);
    return 0;
}