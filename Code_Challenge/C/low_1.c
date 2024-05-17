#include <iostream>
 
int main() {
    int n=2060, a, b;
    n += (2400 - 2013);
    a = (n + 5) % 12;
    b = (n + 9) % 10;
    printf("%c%c\n", a + 'A', b + '0');
    return 0;
}

//#low1

//힌트 십이간지
//답 E6