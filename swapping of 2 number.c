#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 20, l = 5;

    // Code to swap 'k' and 'l'
    k = k * l; // k now becomes 100
    l = k / l; // l becomes 20
    k = k / l; // k becomes 5

    printf("After Swapping: k = %d, l = %d", k, l);

    return 0;
}
