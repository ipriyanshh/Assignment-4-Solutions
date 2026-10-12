//Searching in an Array — The program below should search for a value in an array and print its index (2 for the key 15 in the given array), or −1 if the key is not present. Examine the program carefully and determine whether it performs the stated task correctly. If necessary, make the required corrections so that the program produces the intended output.
#include <stdio.h> 
int search(int arr[], int n, int key) { 
    for (int i = 0; i < n; i++) { 
        if (arr[i] == key) return i; 
    }
    return -1; 
} 
int main() { 
    int arr[5] = {4, 8, 15, 16, 23}; 
    int key = 15; 
    int pos = search(arr, 5, key); 
    printf("Position = %d\n", pos); 
    return 0; 
}