#include <stdio.h>
int main()
{
    int n = 10, a = 0, b = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i)
    {
        printf("%p, ", &a); // Print the actual Fibonacci number
        printf("%d, ", a); // Print the actual Fibonacci number
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}
