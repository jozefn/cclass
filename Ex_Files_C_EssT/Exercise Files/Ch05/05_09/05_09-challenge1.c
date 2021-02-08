#include <stdio.h>

void line(int cnt,char v)
{
    for (int i = 0; i<=cnt; i++)
    {
        putchar(v);
    }
    putchar('\n');
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}
