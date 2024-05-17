#include <stdio.h>

#define MAX_NUM_TOWERS 500000
#define MAX_TOWER_HEIGHT 100000000

int towers[5] = {6,9,5,7,4};
int stack[MAX_NUM_TOWERS + 1];
int top = 0;

char output_buf[MAX_NUM_TOWERS * 11];
int buffer_size = 0;

int main(void)
{
    int num_towers = 5;
    towers[0] = MAX_TOWER_HEIGHT + 1;
    stack[top] = 0;

    for (int i = 1; i <= num_towers; i++)
    {
        while (towers[i] > towers[stack[top]])
        {
            top--;
        }

        buffer_size += sprintf(&output_buf[buffer_size], "%d ", stack[top]);

        stack[++top] = i;
    }

    printf("%s\n", output_buf);
}  

//high1

// 정답 0 0 2 2 4
// 힌트 백준 2009년 고등부 2번