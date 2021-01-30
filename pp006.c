#include <stdio.h>
#include <math.h>
int main()
{
    int i, ar[15];
    printf("Enter 10 numbers: ");
    for (i=0; i<10; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i=0; i<10; i++)
    {
        if(ar[i]%2==0)
        {
            printf("%d ", ar[i]);
        }
    }
    return 0;
}
