// #include <stdio.h>
// typedef struct Compl
// {
//     float a;
//     float b;
// } Complexe;
// Complexe Read()
// {
//     Complexe c;
//     printf("Give real part : ");
//     scanf("%f", &c.a);
//     printf("\nGive imag part : ");
//     scanf("%f", &c.b);
//     return c;
// }
// void Display(Complexe c) { printf("\n\nComplex nb is = %f + i.%f", c.a, c.b); }
// Complexe Sum(Complexe c1, Complexe c2)
// {
//     Complexe s;
//     s.a = c1.a + c2.a;
//     s.b = c1.b + c2.b;
//     printf("\n\nSum od %f+i.%f and %f+i.%f = %f+i.%f", c1.a, c1.b, c2.a, c2.b, s.a, s.b);
//         return s;
// }
// Complexe Mult(Complexe c1, Complexe c2)
// {
//     Complexe m;
//     m.a = c1.a * c2.a - c1.b * c2.b;
//     m.b = c1.a * c2.b + c2.a * c1.b;
//     printf("\n\nProduct of %f+i.%f and %f+i.%f = %f+i.%f", c1.a, c1.b, c2.a, c2.b, m.a, m.b);
//     return m;
// }
// void main()
// {
//     Complexe p, q, r1, r2;
//     p = Read();
//     Display(p);
//     printf("\n\n");
//     q = Read();
//     Display(q);
//     printf("\n\n");
//     r1 = Sum(p, q);
//     printf("\n\n");
//     r2 = Mult(p, q);
// }



#include <stdio.h>

typedef struct
{
    int a;
    int b;
} complexe;

complexe readC()
{
    complexe x;
    printf("Enter a real number:\n");
    scanf("%d", &x.a);
    printf("Enter an imaginary number:\n");
    scanf("%d", &x.b);
    printf("x = %d + %d i\n", x.a, x.b);
    return x;
}

complexe sum(complexe x, complexe y)
{
    complexe result;
    result.a = x.a + y.a;
    result.b = x.b + y.b;
    printf("Sum = %d + %d i\n", result.a, result.b);
    return result;
}
complexe mul(complexe x, complexe y)
{
    complexe result;
    result.a = x.a * y.a;
    result.b = x.b * y.b;
    printf("mul = %d * %d i\n", result.a, result.b);
    return result;
}

int main()
{
    complexe c1, c2;
    c1 = readC();
    c2 = readC();
    sum(c1, c2);
    mul(c1,c2);
    return 0;
}
