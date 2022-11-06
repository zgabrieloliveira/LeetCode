#include <stdio.h>

int main() {

//ENTRADA 

    int h, hfinal, hr;
    int m, mfinal, mr;
    int d, dfinal, dr;
    int s, sfinal, sr;

    scanf("Dia %d", &d);
    scanf("%d : %d : %d\n", &h, &m, &s);
    scanf("Dia %d", &dfinal);
    scanf("%d : %d : %d", &hfinal, &mfinal, &sfinal);

    s = sfinal - s;
    m = mfinal - m;
    h = hfinal  - h;
    d = dfinal  - d;

//SAIDA 

    if(s < 0) {
        s += 60;
        m--;
    }

    if(m < 0) {
        m += 60;
        h--;
    }

    if(h < 0) {
        h += 24;
        d--;
    }

        printf("%d dia(s)\n", d);
        printf("%d hora(s)\n", h);
        printf("%d minuto(s)\n", m);
        printf("%d segundo(s)\n", s);


 return 0;

}