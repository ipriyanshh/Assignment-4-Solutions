//Arrays as Function Arguments — Write a function int findMax(int arr[], int n) that returns the largest element, and a function float average(int arr[], int n) that returns the average. Read n elements in main, call both functions, and print the results.
#include <stdio.h>
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
float average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    if (n <= 0) {
        printf("Number of elements must be positive.\n");
    }
    for (int i = 0; i < n; i++) {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Maximum element = %d\n", findMax(arr, n));
    printf("Average = %.2f\n", average(arr, n));
    return 0;
}
