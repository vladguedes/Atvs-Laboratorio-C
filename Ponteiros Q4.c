#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro);

int main(void) {
    float l, area, perimetro, *pa, *pp;
    pa = &area;
    pp = &perimetro;
    scanf("%f", &l);
    calcula_hexagono(l, pa, pp);
    printf("Area = %.2f\nPerimetro = %.2f", area, perimetro);
    return(0);
}

void calcula_hexagono(float l, float *area, float *perimetro) {
    *area = 3 * ((pow(l, 2)) * (sqrt(3))) / 2;
    *perimetro = 6 * l;
}