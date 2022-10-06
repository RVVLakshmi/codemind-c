#include <stdio.h>

int main()
{   
    // array to store string taken as input
    char sentence[20];
    
    
    // use the fgets method specifying the size of the array as the max limit
    fgets(sentence, 20, stdin);
    
    // printing the input value
    printf("%s", sentence);
    
    return 0;
}
