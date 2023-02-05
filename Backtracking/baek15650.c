//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
int n, m;
int list[10] = {0,};
int visited[10] = {0,};
int end[10] = {0,};
void dfs(int N, int c){
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
        if(c < i){ // i가 넘겨받은 그 첫번째 수보다 클 때만 실행되게
            // 재귀 개념 더 익혀야 할듯
            list[N] = i;
            visited[i] = 1;
            dfs(N+1, i);
            visited[i] = 0;
        }
    }
}
int main(){
    scanf("%d %d", &n, &m);
    dfs(0, 0);
    return 0;
}
