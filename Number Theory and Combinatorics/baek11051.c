//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
int dp[1001][1001] = {0};
int bino(int n, int k){
    if(k == 0 || k == n){
        dp[n][k] = 1;
    }
    for(int i = 1; i<=n; i++){ // 5 2
        for(int j = 0; j<=k; j++){
            if(j == 0 || i == 1 || i == j){
                dp[i][j] = 1%10007;
            }else{
                dp[i][j] = dp[i-1][j-1]%10007 + dp[i-1][j]%10007;
            }
        }
    }
    return dp[n][k]%10007;
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", bino(n, k)%10007);
    return 0;
}