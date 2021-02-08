#include <stdio.h>

int main()
{
    int cnt;
    int i;

    printf("enter a value: ");
    scanf("%d",&cnt);

    for ( i=0; i<=cnt ; i++)
    {
        putchar('-');
    }

    printf("\n first line \n");

    i = 0;
    while (i<=cnt)
    {

        putchar('-');
        i++;
    }
    printf("\n second line \n");

	return(0);
}
