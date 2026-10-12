//Scope and Storage Classes — Write a function void counter() that has a static int count and an int autoCount, both starting at 0 and both incremented on each call. Call it 5 times from main, print both values each time, and explain the difference in output. Also declare a global variable with the same name as a local one and show which value gets printed.

#include <stdio.h>
int value = 100;   // Global variable
void counter() {
    static int count = 0;
    int autoCount = 0;
    count++;
    autoCount++;
    printf("static count = %d, autoCount = %d\n", count, autoCount);
}
int main() {
    int value = 15;  // Local variable
    printf("Value = %d\n", value);
    counter();
    counter();
    counter();
    counter();
    counter();
    return 0;
}
