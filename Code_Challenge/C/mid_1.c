#include <stdio.h>
 
int main(void){
    int N=6;
 
    int stairs[6]={10,20,15,25,10,20};
    for(int i=0; i<N; i++){
        scanf("%d", &stairs[i]);
    }
    int score[6][2];
    score[0][0] = stairs[0], score[0][1] = stairs[0];
    score[1][0] = stairs[0] + stairs[1], score[1][1] = stairs[1];
    for(int i=2; i<N; i++){
        score[i][0] = score[i-1][1] + stairs[i];
        score[i][1] = max(score[i-2][0], score[i-2][1]) + stairs[i];
    }
 
    printf("%d\n", max(score[N-1][0], score[N-1][1]));
}
 
int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

//답 75