
#include <stdio.h>
int arr[10]={1,0,1,1,1,0,0,1,1,0};
int main() {
    int n=10;
    scanf("%d", &n);
    int sum = 0, add = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            sum += add;
            add++;
        }
        else if (arr[i] == 0) {
            add = 1;
        }
    }
    printf("%d", sum);
}

//low2

//답 10