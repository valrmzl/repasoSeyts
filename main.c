#include <stdio.h>
int compareInts(void *a, void *b)
{
    int *A=a;
    int *B=b;
    return *A-*B;
}

void displayInts(void *element)
{
    int *a=element;
    printf("[%d] ",*a);
}


int main() {
    printf("Hello, World!\n");
    return 0;
}
