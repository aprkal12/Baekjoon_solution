//
// Created by DH on 2023-02-04.
//

// 조합(이항계수)을 구현하는 방식 중 하나인 DP
// 파스칼의 삼각형 생각해보기
#include <stdio.h>
int dp[31][31] = {0,};
int dpriver(int n,int m){
    if(n == 1){
        return m;
    }else if(n == m || m==1){
        return 1;
    }else if(dp[n][m] != 0){
        return dp[n][m];
    }
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
            if(i == 0 || j == 0 || i == j){
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
            }
        }
    }
    return dp[n][m];
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        int n,m;
        scanf("%d %d", &n, &m);
        printf("%d\n", dpriver(n,m));
    }
    return 0;
}