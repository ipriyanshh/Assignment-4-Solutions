//Call by Value — Write a function void swapVal(int a, int b) that swaps its two parameters and prints them inside the function. Call it from main and print the values of the original variables before and after the call. Explain in a comment why the variables in main did not change.
#include <stdio.h>
void swapVal(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d and b = %d", a, b);
}
int main(){
    int a, b;
    printf("Enter value of a and b :\n");
    scanf("%d %d", &a,&b);
    swapVal(a,b);
    printf("\nThe values of a and b after function call are %d and %d respectively.", a,b);
    return 0;
}