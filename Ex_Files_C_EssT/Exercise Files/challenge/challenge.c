#include <stdio.h>
#include <stdlib.h>

/* generate mulitiple lines of output */

void sep_row(int cnt, char v )
{
    for (int y = 0; y <= cnt; y++)
    {
        putchar(v);
    }
    printf("\n");
}

void new_line(int c, char letter,int col )
{
    for ( int y = 1; y <= col; y++)
    {
        printf(" %d%c",c,letter);
        letter++;
    } 
    printf("\n");
}


int main()
{

    int rows = 0;
    int c = 0;

    /* get and verify input */

    printf(" enter a number of rows (18 max): ");
    scanf("%d",&rows);

    /* avoid out-of-range values */

    if (rows > 18)
    {
        rows = 18;
    }

    /* process the rows */

    for ( int i = 0; i <= rows; i++)
    {
        char letter = 'A';
        int col = ('J' - 'A') + 1;
        if (i % 2)
        {
            int sep = col * 3;
            sep_row(sep,'=');
            c++;
        }
        else 
        {  
            new_line(c,letter,col);
        }
    }
    return 0;

}
