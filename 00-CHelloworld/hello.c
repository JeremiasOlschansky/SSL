#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* output;
    output=fopen("output.txt","w");
    fprintf(output,"Hello world!\n");
    printf("Hello world!\n");
    return 0;
}