#include <stdio.h>

int main()
{
    int i, n;
  	printf("ALL EVEN NUMBERS FROM 1 TO n\n");
    printf("Emter a number: ");
    scanf("%d", &n);

    printf(" The even numbers from 1 to %d are: ", n);

    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}