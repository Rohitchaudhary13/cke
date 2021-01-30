#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter Numbers: ");
    scanf("%d", &n);
    while(n!=0)
    {
        if(n%2)
            printf("%d is odd\n", n);
        else
            printf("%d is even\n", n);
            scanf("%d", &n);
    }
    return 0;
}
