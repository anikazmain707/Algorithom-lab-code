
#include <stdio.h>

int call_f()
{
    printf("This is user define function\n");
}

int main()
{
    int n;

    printf("This is a main function\n");

    printf("Enter 1 for printing from another function: ");
    scanf("%d", &n);

    if(n==1)
    {
        call_f();
    }
    else
    {
        printf("Wrong Input\n");
    }

    return 0;
}
