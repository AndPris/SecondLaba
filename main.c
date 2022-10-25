#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, P, p, ba, bb, bc, ha, hb, hc, ma, mb, mc, S;

    printf("Enter triangle sides: \n");
    if(!scanf("%f", &a) || a <= 0) { //check for correct input
        printf("Invalid data");
        return 0;
    };
    if(!scanf("%f", &b) || b <= 0) {
        printf("Invalid data");
        return 0;
    };
    if(!scanf("%f", &c) || c <= 0) {
        printf("Invalid data");
        return 0;
    };

    if((a + b <= c) || (a + c <= b) || (b + c <= a)) { // Is there such triangle
        printf("No such triangle");
    } else {
        P = a + b + c; //Perimetr
        p = P / 2; //Halfperimetr

        S = sqrt(p * (p - a) * (p - b) * (p - c));  //Square

        ha = 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / a; //Heights
        hb = 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / b;
        hc = 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / c;

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
