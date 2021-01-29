
// ValikkojaInputOutput.cpp : Defines the entry point for the console application.


#include  <stdio.h>
#include <stdlib.h>

// globaalit muuttujat
char nimi[21], puskuri[21];
int ika;

void kysyNimi()
{
    printf(" Anna nimesi ");
    /*
     *  Voidaan käyttää " %[^\n]s" TAI " %[^\n]%*c" scanf:n yhteydessä
     *  String-syötteen saamiseen, jossa on välilyönti.
     *
     *  %:n edessä oleva välityönti on tärkeä, koska jos sinulla on ohjelmassa vielä
     *  muutama scanf niin, kun saavutat char (merkkijonon) scanf:n komento ohitetaan etkä voi
     *  antaa sille arvoa... mutta jos laitat %:n eteen välilyönti, niin luetaan syöttö ilman ongelmia.
     */
    scanf(" %[^\n]s", nimi);
    // TAI fgets(nimi, sizeof(nimi), stdin);
}
void kysyIka()
{
    printf(" Anna ikäsi ");
    scanf("%d", &ika);

}
void tulostaNimi()
{
    printf(" Nimi: %s \n", nimi);


}
void tulostaIka()
{
    printf(" Ikä: %d \n", ika);


}


void tulostaValikko()
{
    char v;
    do
    {
        system("cls");
        printf("-----------------------Syöttö/Tulostus-testaus----------------------------------");
        printf("\n\n\n\n");
        printf("\t\t\t\tKysy nimi\t\t1");
        printf("\n\t\t\t\tKysy ikä\t\t2");
        printf("\n\t\t\t\tTulosta nimi\t\t3");
        printf("\n\t\t\t\tTulosta ikä\t\t4");
        printf("\n\t\t\t\tLopetus\t\t\t5");
        printf("\n\n\n\t\t\t\tValitse: ");
        v=getchar();
        //getch(); // kulutetaan enterin painallus
        switch (v) {
            case '1': 	kysyNimi();
                break;
            case '2': 	kysyIka();
                break;
            case '3':   tulostaNimi();
                break;
            case '4': 	tulostaIka();
                break;
            case '5': break;

        }
    }
    while (v!='5');
}

void main(){
    tulostaValikko();

}


