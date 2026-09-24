#include <stdio.h>

int main()
{
    int num;
    printf("Enter an number = ");
    scanf("%d", &num);
    if (num>0)
        printf(" %d is a Positive number \n",num);
    else if (num == 0)
        printf(" %d is a zero\n",num);
    else
        printf(" %d is a negative number\n",num);
    return 0;
}
