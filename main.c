#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, P, p, ba, bb, bc, ha, hb, hc, ma, mb, mc, S;

    printf("Enter triangle sides: \n");
    scanf("%f %f %f", &a, &b, &c);

    if(a < 0 || b < 0 || c < 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) { // Is there such triangle
        printf("No such triangle");
    } else {
        P = a + b + c; //Perimetr
        p = P / 2; //Halfperimetr

        S = sqrt(p * (p - a) * (p - b) * (p - c));  //Square

        ha = 2 * S / a; //Heights
        hb = 2 * S / b;
        hc = 2 * S / c;

        ma = sqrt(2 * b * b + 2 * c * c - a * a) / 2; //Medians
        mb = sqrt(2 * a * a + 2 * c * c - b * b) / 2;
        mc = sqrt(2 * a * a + 2 * b * b - c * c) / 2;

        ba = 2 * sqrt(b * c * p * (p - a)) / (b + c); //Bisectors
        bb = 2 * sqrt(a * c * p * (p - b)) / (a + c);
        bc = 2 * sqrt(a * b * p * (p - c)) / (a + b);

        printf("Square: %.2f\n", S);
        printf("Perimetr: %.2f\n", P);
        printf("Bisectors: %.2f %.2f %.2f\n", ba, bb, bc);
        printf("Medians: %.2f %.2f %.2f\n", ma, mb, mc);
        printf("Heights: %.2f %.2f %.2f\n", ha, hb, hc);
    }

    return 0;
}
