#include <stdio.h>
// Function that swaps two numbers using pointers (call-by-reference)
void swap(int *x, int *y) {
 int temp = *x;
 *x = *y;
 *y = temp;
 printf("Inside function, x = %d, y = %d\n", *x, *y);
}
int main() {
 int a = 10, b = 20;
 printf("Before function call: a = %d, b = %d\n", a, b);
 swap(&a, &b); // Passing the address of a and b to the function
 printf("After function call: a = %d, b = %d\n", a, b);
 return 0;
}