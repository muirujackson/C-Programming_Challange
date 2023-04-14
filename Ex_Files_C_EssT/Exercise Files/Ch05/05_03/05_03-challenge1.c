#include <stdio.h>

void line(){
    int limit;

    for(limit=0; limit<40;limit++){
        putchar('_');
        putchar('\n');
    }
    /*while(numberLine<40){
        putchar('_');

        numberLine++;
    }
    putchar('\n'); */
}



int main()
{
	puts("How to Fight Off a Robot Attack");
	line();
	puts("A Survival Guide for the 21st Century");
	line();

	return(0);
}

