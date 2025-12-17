// compare.c - - Input two number, compare them, and print the sum
#include <stdio.h>

int main() {
    int a, b, sum;

    // Prompt and read a
    printf("Enter value for a:\n");
    scanf("%d", &a);

    // Prompt and read b
    printf("Enter value for b:\n");
    scanf("%d", &b);

    sum = a + b;

    // Conditional check
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is less than or equal to b\n");
    }

    // Print formatted output
    printf("a=%d, b=%d, a+b=%d\n", a, b, sum);

    return 0;
}

