# include <stdio.h>
int main()
{
    int num;
    int sum(int);
    scanf("%d",&num);
    printf("%d",sum(num));
   
}
int sum(int x)
{
    if(x>=1)
    return x + sum(x-1);
    else
    return 0;
}