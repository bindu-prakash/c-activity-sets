#include <stdio.h>

int input_number();
int find_fibo(int n);
void output(int n, int fibo);

int main() {
    int n;
    printf("Enter the value of n: ");
    n = input_number();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}

int input_number() {
    int num;
    scanf("%d", &num);
    return num;
}

int find_fibo(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, next_term;
    for (int i = 2; i <= n; i++) {
        next_term = a + b;
        a = b;
        b = next_term;
    }
    return b;
}

void output(int n, int fibo) {
    printf("The %dth Fibonacci number is: %d\n", n, fibo);
}
