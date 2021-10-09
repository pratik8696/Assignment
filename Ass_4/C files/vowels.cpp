#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    int cases;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        cases=1;
    }
    else if (discriminant == 0)
    {
        cases=2;
    }
    else if (discriminant < 0)
    {
        cases=3;
    }
    switch (cases)
    {

    // condition for real and different roots
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    break;

    // condition for real and equal roots
    case 2:
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    break;

    // if roots are not real
    case 3:
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    break;
    }
    return 0;
} 

