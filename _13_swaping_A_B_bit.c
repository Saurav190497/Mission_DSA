#include<stdio.h>
/*int main()
{
    int num, posA, posB, ResA, ResB;
    scanf("%d%d%d", &num, &posA, &posB);
    ResA = num & 1<<posA;
    ResB = num & 1<<posB;

}*/
#include <stdio.h>

int swapBitsNumber(unsigned int num, unsigned int firstPosition, unsigned int secondPosition)
{
    unsigned int firstBit = (num >> firstPosition) & 1;

    unsigned int secondBit = (num >> secondPosition) & 1;

    unsigned int xorBit = (firstBit ^ secondBit);

    xorBit = (xorBit << firstPosition) | (xorBit << secondPosition);

    return num ^ xorBit;
}

int main()
{
    int number, firstPosition, secondPosition, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the first bit position: ");
    scanf("%d", &firstPosition);

    printf("Enter the second bit position: ");
    scanf("%d", &secondPosition);

    result = swapBitsNumber(number, firstPosition, secondPosition);
    printf("Number after bits are swapped: %d\n", result);

    return 0;
}