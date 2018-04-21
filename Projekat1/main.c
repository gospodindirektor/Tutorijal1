#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**Program za poveæanje plate radnika prema provedenom radnom vremenu na poslu.
    Mesec ima 160 radnih sati. Za prekovremeni rad od 20 sati mesecno povisica je 10%,za
    18
    prekovremeni rad od 30 sati je 20%. Prikazati podatke ime prezime i platu radnika i za koliko
    je % poveæanje **/

    struct Radnik{
        char ime[30];
        char prezime[30];
        int plata;
        int br_sati;
    };

    struct Radnik R;

    int povecanje;

    printf("Unesi ime: ");
    gets(R.ime);
    printf("Unesi prezime: ");
    gets(R.prezime);
    printf("Unesi platu: ");
    scanf("%d", &R.plata);
    printf("Unesi broj radnih sati: ");
    scanf("%d", &R.br_sati);

    povecanje = ((int)(R.br_sati-160)/30)*20;
    if((R.br_sati-160)%30>=20){
        povecanje += 10;
    }

    printf("Ime: %s \n Prezime: %s\n Plata: %d\n Procenat: %d",R.ime,R.prezime,R.plata*100/povecanje, povecanje);

    return 0;
}
