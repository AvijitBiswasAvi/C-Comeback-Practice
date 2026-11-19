#include <stdio.h>

int main()
{

    float m1, m2, m3;
    float average;

    printf("Enter m1 = ");
    scanf("%f", &m1);

    printf("Enter m2 = ");
    scanf("%f", &m2);

    printf("Enter m3 = ");
    scanf("%f", &m3);

    average = (m1 + m2 + m3) / 3;
    printf("\nThe marks of the student are : %.2f, %.2f & %.2f\n", m1, m2, m3);
    printf("The Average mark is = %.2f\n", average);

    if ((m1 >= 33 && m2 >= 33 && m3 >= 33) && (average >= 40))
    {
        printf("Result = Pass\n");
    }
    else
    {
        printf("Result = Fail\n");
    }

    return 0;
}