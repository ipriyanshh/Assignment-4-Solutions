//Decimal to Binary Conversion — Write a function int decimalToBinary(int n) that takes a positive decimal number and returns its binary representation as an integer. Read a number in main, call the function, and print the result.
#include <stdio.h>
int decimalToBinary(int n) {
    int binary = 0;
    int place = 1;
    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        n = n / 2;
        place *= 10;
    }
    return binary;
}

int main() {
    int n;
    printf("Enter a positive decimal number: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    }
    printf("Binary representation of %d = %d\n", n,decimalToBinary(n));
    return 0;
}
