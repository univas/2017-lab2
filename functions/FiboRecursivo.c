#include<stdio.h>

int fibonacci(int n) {
    if(n == 0) {
         return 0;
    }
    if(n == 1) {
         return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int i;
    for(i =0; i <= 10; i++) {
        printf("Fibonacci de %i: %i\n", i, fibonacci(i));
    }
    system("pause");
}
