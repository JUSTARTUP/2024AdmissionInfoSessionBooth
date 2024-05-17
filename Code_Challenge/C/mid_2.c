#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 200, b = 128;
	int x, y;
		
	scanf("%d %d", &a, &b);

	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0)
			x = i;	
	}
	
	printf("%d\n", x);
	printf("%d", a * b / x);
}

//mid2

// 정답 8 3200
// 힌트 수학