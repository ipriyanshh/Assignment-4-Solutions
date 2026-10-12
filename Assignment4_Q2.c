//Functions Calling Other Functions — Write a function int square(int n), a function int sumOfSquares(int a, int b) that uses square(), and a function int isPerfectSquare(int n) that returns 1 or 0. In main, read two numbers, print the sum of their squares, and report whether each is a perfect square
#include<stdio.h>
int square(int n){
    return n*n;
}
int sumOfSquares(int a, int b){
    return square(a)+square(b);
}
int isPerfectSquare(int n) {
    if (n < 0)
        return 0;
    for (int i = 0; i <= n / 2; i++) {
        if (i * i == n)
            return 1;
    }

    return 0;
}
int main(){
    int a,b;
    printf("Enter value of a and b :\n");
    scanf("%d %d", &a, &b);
    printf("\nSum of square of given values is %d.", sumOfSquares(a,b));
    if(isPerfectSquare(a)==1) printf("\n%d is a perfect square",a);
    else printf("\n%d is not perfect square",a);
    if(isPerfectSquare(b)==1) printf("\n%d is a perfect square",b);
    else printf("\n%d is not perfect square",b);
    return 0;
}