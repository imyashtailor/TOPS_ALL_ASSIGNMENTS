#include <stdio.h>

union zindez {
    int a;
    float b;
    char name[7];
};

int main()
{
    union zindez z1;
    sizeof(z1);

    printf("Size of z1 = %d bytes",sizeof(z1));

    return 0;
}