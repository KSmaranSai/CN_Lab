// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     int a1,a2,a3,a4;
//     a1 = (n<<24)>>24;
//     a2 = (n<<16)>>24;
//     a3 = (n<<8)>>24;
//     a4 = n>>24;
//     printf("1st byte : %d\n", a1);
//     printf("2nd byte : %d\n", a2);
//     printf("3rd byte : %d\n", a3);
//     printf("4th byte : %d\n", a4);
//     return 0;
// }

#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    // Extracting each byte using bitwise operations
    unsigned char byte1 = (num & 0xFF);
    unsigned char byte2 = ((num >> 8) & 0xFF);
    unsigned char byte3 = ((num >> 16) & 0xFF);
    unsigned char byte4 = ((num >> 24) & 0xFF);

    // Printing the content of each variable
    printf("Byte 1: %u\n", byte1);
    printf("Byte 2: %u\n", byte2);
    printf("Byte 3: %u\n", byte3);
    printf("Byte 4: %u\n", byte4);

    return 0;
}