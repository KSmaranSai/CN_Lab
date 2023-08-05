#include <stdio.h>

struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
};

struct pkt toByte(int n)
{
    char a1, a2, a3, a4;
    a1 = (n & 0xFF);
    a2 = ((n >> 8) & 0xFF);
    a3 = ((n >> 16) & 0xFF);
    a4 = ((n >> 24) & 0xFF);
    struct pkt p1;
    p1 = (struct pkt){a1,{a2,a3},a4};
    return p1;
}

int toInteger(struct pkt p)
{
    return p.ch1 + (p.ch2[0] << 8) + (p.ch2[1] << 16) + (p.ch3 << 24);
}

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    struct pkt p = toByte(n);
    printf("1st byte : %u\n", p.ch1);
    printf("2nd byte : %u\n", p.ch2[0]);
    printf("3rd byte : %u\n", p.ch2[1]);
    printf("4th byte : %u\n", p.ch3);

    printf("\nInteger : %d", toInteger(p));
    return 0;
}
