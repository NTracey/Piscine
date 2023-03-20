#include <unistd.h>

/*
int main(void)
{
    write(1, "a, B, c, D, e, F, g, H, i, J, k, L, m, N, o, P, q, R, s, T, u, V, w, X, y, Z", 76);
    return (0);
}
*/

int main(void)
{
    char c;
    c = 'a';

    while (c <= 'z')
    {
        write(1, &c, 1);
        c--;
    }
}