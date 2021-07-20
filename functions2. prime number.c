#include <stdio.h>
#include <stdlib.h>

int primenumber(int, int);

int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = primenumber(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}

int primenumber(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primenumber(num, i - 1);
       }
    }
}
