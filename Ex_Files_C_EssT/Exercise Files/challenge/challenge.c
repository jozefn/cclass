#include <stdio.h>
#include <stdlib.h>

/* generate mulitiple lines of output */

int main()
{

    int rows = 0;
    int a = 0;

    /* get and verify input */
    printf(" enter a number of rows (18 max): ");
    scanf("%d",&rows);

    /* avoid out-of-range values */

    if (rows > 18)
    {
        rows = 18;
    }

    /* process the rows */

    printf(" the number rows: %d \n ",rows);
    a = rows >> 1;
    printf(" half the number rows: %d \n ",a);
    a = rows << 1;
    printf(" double the number rows: %d \n ",a);

    return 0;

}
