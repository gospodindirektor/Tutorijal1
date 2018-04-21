#include <stdio.h>
#include <stdlib.h>

/**
    Napisati program za formiranje strukture student sa karakteristikama Ime, Prezime,
    broj indeksa, srednja ocena. Za uneti broj studenata n, sortirati studente prema
    srednjoj oceni i ispisati na ekranu

 **/

struct student{
    char ime[20];
    char prezime[20];
    int br_indeksa;
    float sr_ocena;
};

void sortiraj(struct student a[], int n){
    int i, j;
    struct student pom;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i].sr_ocena>a[j].sr_ocena){
                pom = a[i];
                a[i] = a[j];
                a[j] = pom;
            }
        }
    }
}

int main()
{
    int n;
    int i;
    struct student S[50];
    printf("Unesi broj studenata: \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Unesi ime: \n");
        scanf("%s",S[i].ime);
        printf("Unesi prezime: \n");
        scanf("%s",S[i].prezime);
        printf("Unesi broj indeksa: \n");
        scanf("%d", &S[i].br_indeksa);
        printf("Unesi srednju ocenu: \n");
        scanf("%f", &S[i].sr_ocena);
    }
    sortiraj(S, n);
    for(i=0;i<n;i++){
        puts(S[i].ime);
        puts(S[i].prezime);
        printf("%d\n",S[i].br_indeksa);
        printf("%.2f\n\n",S[i].sr_ocena);
    }

    return 0;
}
