# include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int fact(int);
    printf("%d",fact(num));
   return 0;
}
int fact(int x)
{
    if(x>=1)
    return x * fact(x-1);
    else
    return 1;
}