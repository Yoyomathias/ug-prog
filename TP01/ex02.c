
#include <unistd.h>

int main(void)
{
    int number = 3;
    int test = 0;

    while (test < number)
    {
        write(1, "Vert et Violet trop beau\n", 25);
        test = test + 1;
    }

    return 0;
}
