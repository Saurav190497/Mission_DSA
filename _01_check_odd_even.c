// check user input is odd or even.
#include <stdio.h>
int main()
{
        int num;
        printf("enter the number you want to check\n");
        scanf("%d", &num);

        if(num&1)
            printf("You had entered %d . This is an Odd number" , num);
        else
            printf("You had entered %d . This is an Even number" , num);
    return 0;
}