#include <stdio.h>
#include <math.h>
int main()
{
    int i, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
