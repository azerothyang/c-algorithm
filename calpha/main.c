#include <stdio.h>

long sum(long* n){
    long sum = 0;
    for (int i = 1; i <= *n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    long n = 100000000;
    long result = 0;
    result = sum(&n);
    printf("Hello, World!\n");
    printf("result is %ld\n", result);
    return 0;
}