
#include <stdio.h>

#include <string.h>


int main()
{
    char merkkiJono[21];
    char *loppu, *alku, apuChar;
    int mPituus, i;

    printf("Anna jokin merkkijono ");
    gets(merkkiJono);

    // Merkkijonon pituus
    mPituus = strlen(merkkiJono);
    printf("merkkijonon pituus %d\n", mPituus);

    alku = merkkiJono;
    loppu = merkkiJono;

    // Siirrä loppu pointeri viimeiseen merkkiin
    for(i = 0; i < mPituus - 1; i++)
        loppu++;

    // Swappa merrkijonon kirjaimet käyttäen alku ja loppu
    for(i = 0; i < mPituus / 2; i++){
        // swappa kirjain
        apuChar = *loppu;
        *loppu = *alku;
        *alku = apuChar;

        // päivitä osoittimien sijainnit
        alku++;
        loppu--;
    }

    printf("Tulostan merkkijonon nurinpäin: %s " , merkkiJono);









    /*
    for (;*alku != *loppu;loppu++); // kelataan loppuun
    alku = apu;
    loppu--; // osoitetaan jo loppumerkkiä

    for (;loppu != merkkiJono;loppu--) // tulostetaan
        printf("%c ",*loppu);
    printf("%c ", *loppu); // 1 merkki erikseen
    return 0;
     */




    /*
    printf("Tulostan merkkijonon merkki merkiltä: ");
    for(mOsoitin = merkkiJono; *mOsoitin !=  '\0'; mOsoitin++)
        printf("%c ", *mOsoitin);
    */
}
