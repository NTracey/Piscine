#include <unistd.h>

int main(void)
{
    int *a, *b, temp;

    a = 4;
    b = 2;

    temp = *a;
    *a = *b;
    *b = temp;

    

    write(1, "a = %d\n", 6);
    write(1, "b = %d\n", 6);
}