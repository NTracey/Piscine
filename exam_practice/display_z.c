#include <unistd.h>

/*
void display_z(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    display_z('z');
    return (0);
}
*/

int main(void)
{
    write(1, "z", 1);
    return (0);
}