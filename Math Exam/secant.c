#include <stdio.h>

float f(float x)
{
    return x * x * x - 2 * x - 5;
}
int main()
{
    float a, b, t;
    scanf("%f %f %f", &a, &b, &t);

    float c;
    for (int i = 0; i < 50; i++)
    {
        c = b - f(b) * ((b - a) / (f(b) - f(a)));
        if (fabs(f(c)) < t)
        {
            printf("Approximate root is: %f", c);
            break;
        }

        printf("Step %d: The approximation is %f\n", i + 1, c);
        a = b;
        b = c;
    }

    return 0;
}