#include <stdio.h>

int main() {
    int i = 2;
    int sum = 0;

    while(i <= 50) {
        sum += i;
        i += 2;
    }

    printf("Sum of all even numbers from 1 to 50 is %d\n", sum);

    return 0;
}
