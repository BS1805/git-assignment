#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 5;  // Factorial calculation
    printf("Factorial of %d is %d\n", num, factorial(num));

    int fib_num = 5;  // Fibonacci calculation
    printf("Fibonacci number at position %d is %d\n", fib_num, fibonacci(fib_num));
    

    printf("Hello, World!\n");
    return 0;
}
