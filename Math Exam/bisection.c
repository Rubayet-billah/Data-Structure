#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x * x - 2 * x - 5;
}

int main()
{
    float a, b, t;
    scanf("%f %f %f", &a, &b, &t);

    if (f(a) * f(b) > 0)
    {
        printf("No root lies");
        return 0;
    }
    float c;

    for (int i = 0; fabs(b - a) >= t; i++)
    {
        c = (a + b) / 2;
        if (f(c) == 0)
        {
            printf("The exact root is= %f", c);
            break;
        }
        if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        printf("Step %d: The approximation is %f\n", i + 1, c);
    }

    return 0;
}