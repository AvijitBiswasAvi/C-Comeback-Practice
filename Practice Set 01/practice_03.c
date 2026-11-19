#include <stdio.h>

int main() {
    
    int number;

    printf("Enter the number = ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("This is Positive number");
    }
    else if (number < 0)
    {
        printf("This is Negative number");
    }
    else
    {
        printf("This is Zero");
    }
    
    return 0;
}