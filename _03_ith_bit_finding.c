// Finding the i'th bit in an user input number
# include <stdio.h>
int main()
{
    int num, pos, res;
    printf(" Enter the number & The position at which you want to know the bit present.\n");
    scanf("%d%d", &num, &pos);
    printf("You had entered %d & you want to know the bit present at %d position\n", num, pos);
    res = num & 1<<pos ;
    printf("You had entered %d & your %d'th position bit is %d\n", num, pos, res);
    return 0;
}