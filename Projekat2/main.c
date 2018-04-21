#include <stdio.h>
#include <stdlib.h>


struct tacka{
    float x;
    float y;
};

void stampa(struct tacka t){
    printf("(%.2f;.%.2f)\n", t.x, t.y);
}

int main()
{
    /** Napisati strukturu za èuvanje podataka o taèkama u ravni, funkciju za štampanje
tacke i izraèunati udaljenosti izmðu taèaka **/

    struct tacka t1, t2;
    float rastojanje;

    printf("Unesi koordinate tacke 1: \n");
    scanf("%f %f", &t1.x, &t1.y);
    printf("Unesi koordinate tacke 2: \n");
    scanf("%f %f", &t2.x, &t2.y);

    rastojanje = sqrt((t1.x-t2.x)*(t1.x-t2.x)+(t1.y-t2.y)*(t1.y-t2.y));

    printf("%f\n", rastojanje);
    stampa(t1);
    stampa(t2);



    return 0;
}
