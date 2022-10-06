#include <stdio.h>
// Calculating the maximum number of handshake using derived formula.
int maxHandshake(int n) { return (n * (n - 1)) / 2; }
 
// Driver Code
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d
", maxHandshake(n));
 
    return 0;
}