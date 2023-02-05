//
// Created by DH on 2023-02-04.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int dp[31]={0,};
int main(){
    int n;
    int k = 0;
    char wear[21];
    char *tar2;
    scanf("%d", &n);
    char* wears = (char*)malloc(sizeof(char*) * n);
    int idx = 0;

    for(int i = 0; i<n; i++){
        int nums = 0;
        scanf("%d", &nums);
        for(int j = 0; j<nums; j++){
            scanf("%s", &wear);
            char* tar2 = strpbrk(wear, " ");
            printf("%s\n", &tar2);
            wears[i] = *tar2;
        }
        for(int i = 0; i<n; i++){
            if(strcmp(&wears[0], &wears[i]) != 0){
                idx++;
            }
        }
        printf("%d\n", idx);
    }
    return 0;
}