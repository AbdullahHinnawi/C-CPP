// matkaj‰rjestelm‰.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// <conio.h>


#define HELSINKIHINTA (float)3.0
#define SEUTUHINTA (float)4.80

enum Matkatyyppi {HELSINKI, SEUTU};

struct Matkakortti
{
    char omistaja[41];
    float saldo;
};


// prototyyppi vaaditaan, jos kutsu on ennen m‰‰rittely‰
void tulostaValikko();
void alustaKortti(struct Matkakortti *kortti);
void nollaaKortti(struct Matkakortti *kortti);
void lataaSaldo(struct Matkakortti *kortti);
int matkusta(struct Matkakortti *kortti, enum Matkatyyppi tyyppi);

int main()
{
   // alustaStringit();
    tulostaValikko();
    return 0;
}

void tulostaValikko()
{
    char v;
    struct Matkakortti kortti;  // kortti on struct Matkakortti -tyyppinen muuttuja
   // nollaaKortti(&kortti); // huolehditaan ettei kortti n‰yt‰ kamalalta, jos sit‰ ei alusteta

    do
    {
        system("clear");
        printf("\n---------------------------------Valikko------------------------------");
        printf("\n\n\n\n");
        printf("\t\t\tAlusta matkakortti\t\t1");
        printf("\n\t\t\tLataa saldoa\t\t\t2");
        printf("\n\t\t\tMatkusta Helsingissa\t\t3");
        printf("\n\t\t\tMatkusta seutuliikenteessa\t4");
        printf("\n\t\t\tTulosta kortin tiedot\t\t5");
        printf("\n\t\t\tLopetus\t\t\t\t6");
        printf("\n\t\t\tValitse:");


        v = getchar();

        switch (v)
        {
            case '1': 	alustaKortti(&kortti); // kortti v‰litet‰‰n aliohjelmalle muuttujaparametrina (k‰ytt‰en osoitinta)

                break;

            case '2':   lataaSaldo(&kortti);

                break;
            case '3':
                matkusta(&kortti, HELSINKI);
                break;
            case '4':	//if
                matkusta(&kortti, SEUTU);
                break;
            case '5':
                printf("\n\n\n\t\t\tKortin tiedot:");
                printf("\n\t\t\tNimi: %s ", kortti.omistaja);
                printf("\n\t\t\tSaldo: %.2f ", kortti.saldo);
                break;

            case '6':

                break;

        }
    }
    while (v!='6');

}


void alustaKortti(struct Matkakortti *kortti)
{
    printf("\n\n\t\tAnna nimesi: ");
    scanf(" %[^\n]s", kortti->omistaja);
    nollaaKortti(kortti);
    printf("\n\n\t\tMatkakortti on  alustettu..");
    printf("\n\t\tMatkakortin omistaja: %s      saldo: %0.2f €", kortti->omistaja, kortti->saldo);


}

void nollaaKortti(struct Matkakortti *kortti)
{
    kortti->saldo=0;

}

void lataaSaldo(struct Matkakortti *kortti)
{
    printf("\n\n\t\tLisää saldoa eurona: ");
    float määrä;
    scanf(" %f",&määrä);
    kortti->saldo = kortti->saldo + määrä;
    printf("\n\n\t\tUusi saldosi on %0.2f €", kortti->saldo);

}
// Tehtava5: katsoo kortilta, onko saldo riitt‰v‰ ja jos on, niin pienent‰‰ sit‰
int matkusta(struct Matkakortti *kortti, enum Matkatyyppi tyyppi)
{
  if(tyyppi==HELSINKI && kortti->saldo >= HELSINKIHINTA){
      printf("\n\n\t\t\tHyvaa matkaa!");
      return kortti->saldo = kortti->saldo - HELSINKIHINTA;

  }else if(tyyppi==SEUTU && kortti->saldo >= SEUTUHINTA){
      printf("\n\n\t\t\tHyvaa matkaa!");
      return kortti->saldo = kortti->saldo - SEUTUHINTA;

  }else{
      printf("\n\t\t\tRahasi eivat riita.");
      printf("\n\t\t\tSaldo: %.2f ", kortti->saldo);

  }

    return 0;

}

