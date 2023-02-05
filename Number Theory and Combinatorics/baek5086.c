//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
int main(void){
    int n1;
    int n2;

    while(1){
        scanf("%d %d", &n1, &n2);
        if(n1 == 0 && n2 == 0){
            break;
        }
        if(n1 > n2){
            if(n1 % n2 == 0){
                printf("multiple\n");
            }else{
                printf("neither\n");
            }
        }else{
            if(n2 % n1 == 0){
                printf("factor\n");
            }else{
                printf("neither\n");
            }
        }
    }
    return 0;
}