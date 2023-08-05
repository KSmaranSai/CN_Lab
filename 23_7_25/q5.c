#include <stdio.h>

// Function to check the Endianness of the host machine
int isLittleEndian() {
    int num = 1;
    char *ptr = (char *)&num;
    return (*ptr == 1);
}

// Function to print the content of each byte location
void printByteContent(int num) {
    char *ptr = (char *)&num;
    printf("Byte content:\n");
    for (int i = 0; i < sizeof(int); i++) {
        printf("Byte %d: 0x%02x\n", i, ptr[i]);
    }
}

// Function to convert the Endianness of the number
int convertEndianness(int num) {
    char *inPtr = (char *)&num;
    char outArr[sizeof(int)];

    for (int i = 0; i < sizeof(int); i++) {
        outArr[i] = inPtr[sizeof(int) - i - 1];
    }

    int *outPtr = (int *)outArr;
    return *outPtr;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n");

    if (isLittleEndian()) {
        printf("Host machine is Little Endian.\n");
    } else {
        printf("Host machine is Big Endian.\n");
    }

    printByteContent(num);

    int convertedNum = convertEndianness(num);
    printf("\nConverted Endianness: %d\n", convertedNum);

    return 0;
}