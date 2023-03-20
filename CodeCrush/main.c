#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,j ,rows, columns;


    printf("How many rows (18 max)? ");
    scanf("%d",&rows);
    columns = 'A';

    if(rows > 18)
    {
        puts("Rows must be less than or equal to 18");
        return (0);
    }
    for(i=0; i<rows; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%d%c ", i, columns+j);

        }
        putchar('\n');
        puts("___________________________________________");
    }
    /* printf("Hello world!\n"); */
    return 0;
}
