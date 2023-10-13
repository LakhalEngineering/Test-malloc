#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    while(malloc(1000000000UL)!= NULL){
        count++;
    }
    printf("%d GB\n", count);
}
