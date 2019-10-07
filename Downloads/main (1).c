#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char **argv) 
{
    srand(time(0));
    int a = rand();
    a%=100;
    printf("%d",a);
}
