// check user input is odd or even.
#include <stdio.h>
void main()
{
        int num;
        printf("enter the number you want to check\n");
        scanf("%d", &num);
        printf("%d\n", num);

        if(num&1)
            printf("You had entered an Odd number");
        else
            printf("You had entered an Even number");

}
