
#include <stdio.h>

int input_array_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n]) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0; 
}

int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("Sum of composite numbers in the array: %d\n", sum);
}

int main() {
    int size, sum;

    size = input_array_size();
    int array[size];
    input_array(size, array);
    sum = sum_composite_numbers(size, array);
    output(sum);

    return 0;
}