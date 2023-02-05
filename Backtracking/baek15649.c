//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
int n1, n2;
int list[10] = {0,};
int visited[10] = {0,};
void dfs(int n){
    if(n2 == n){
        for(int i = 0; i<n2; i++){
            printf("%d ", list[i]);
        }
        printf("\n");
        return;
    }
    for(int i= 1; i<=n1; i++){
        if(visited[i] == 1){
            continue;
        }
        list[n] = i;
        visited[i] = 1;
        dfs(n+1);
        visited[i] = 0;
    }
}
int main(){
    scanf("%d %d", &n1, &n2);
    dfs(0);
    return 0;
}