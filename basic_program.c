#include <stdio.h>
 
 
 int is_prime(int num) {
     if (num <= 1) return 0;
     for (int i = 2; i * i <= num; i++) {
         if (num % i == 0) return 0;
     }
     return 1;
 }
 
 int nth_prime(int n) {
     int count = 0;
     int num = 2;
     while (count < n) {
         if (is_prime(num)) {
             count++;
         }
         num++;
     }
     return num - 1;
 }
 
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