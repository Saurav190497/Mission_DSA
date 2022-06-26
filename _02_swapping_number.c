# include <stdio.h>
int main()
{
    int num1, num2 ;
    printf("Input two numbers you wanyt to swap them.\n");
    scanf("%d%d", &num1, &num2);
    printf("number 1 = %d  \n number 2 = %d \n", num1, num2);
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
    printf("After swaping ---------------\n number 1 = %d  \n number 2 = %d \n", num1, num2);

}