#include <stdio.h>

int main(){
    int n = 0;
    int lo = 0;

    int num = 0;

    scanf("%d", &n);

    int count[4] = {0,};
    int map[6+2][2+2] = {0,};

    int result = 1;
    int rem = 1;
    for(int i = 0; i<6; i++){
        scanf("%d %d", &lo, &num);
//        map[lo-1][count[lo-1]] = num;
        map[i][0] = lo;
        map[i][1] = num;

        count[map[i][0]-1] +=1;
    }
    for(int i = 0; i<6; i++){
        if(count[map[i][0]-1] == 1) {
            result *= map[i][1];
            continue;
        }
        int n = (i+1)%6;
        int nn = (i+2)%6;
        if(map[i][0] == map[nn][0]){
            rem*=map[n][1];
        }
    }
    printf("%d\n", (result - rem) * n);
    return 0;
}