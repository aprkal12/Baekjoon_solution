//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
int n, m;
int list[10] = {0,};
int visited[10] = {0,};
int end[10] = {0,};
void dfs(int N){
    if(N == m){
        for(int i = 0; i<m; i++){
            printf("%d ", list[i]);
        }
        printf("\n");
        return;
    }
    for(int i = 1; i<=n; i++){ // 1 2 3 4
        if(visited[i] == 1){
            continue;
        }
        list[N] = i;
        //visited[i] = 1;
        dfs(N+1);
        visited[i] = 0;

    }
}
int main(){
    scanf("%d %d", &n, &m);
    dfs(0);
    return 0;
}
