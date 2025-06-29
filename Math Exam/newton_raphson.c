#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x * x - 2 * x - 5;
}

float df(float x)
{
    return 3 * x * x - 2;
}

int main()
{
    float a, b, t;
    scanf("%f %f %f", &a, &b, &t);

    // Check if a root exists in the interval [a, b]
    if (f(a) * f(b) >= 0)
    {
        printf("Root not found in the given interval.\n");
        return 0;
    }

    // Choose initial guess (closer to root based on function value)
    float x;
    if (fabs(f(a)) < fabs(f(b)))
    {
        x = a;
    }
    else
    {
        x = b;
    }

    float new_x;
    int max_iterations = 100; // Prevent infinite loops
    int iteration = 0;

    // Newton-Raphson loop
    while (iteration < max_iterations)
    {

        new_x = x - f(x) / df(x); // Newton-Raphson formula

        // Check for convergence
        if (fabs(f(new_x)) < t)
        {
            printf("Root is approximately %f\n", new_x);
            printf("Number of iterations: %d\n", iteration + 1);
            return 0;
        }

        x = new_x;
        iteration++;
    }

    printf("Method failed to converge within %d iterations.\n", max_iterations);
    return 1;
}