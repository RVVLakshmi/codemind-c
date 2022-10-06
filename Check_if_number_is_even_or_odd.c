#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    
    return 0;
}
