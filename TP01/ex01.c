
#include <stdio.h>

int main(void) {
    int test;
    int number;
    test = 0;
    number = 15;
    if (test == number) {
        printf("...");
        return 0;
    }
    while (test < number - 1) {
        test = test + 1;
        printf("%d ", test);
    }
    return 0;
}
