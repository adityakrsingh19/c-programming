#include <stdio.h>

int main()
{
    int a,b,temp = 0;
    printf("Enter the two number:");
    scanf("%d  %d", &a,&b);
    temp = a + b;
    a = temp - a;
    b = temp - b;
    printf("Swaping values: a = %d \n b = %d\n", a,b);
    return 0;
}
