#include <stdio.h>
#include <string.h>
int main() {
    char merkkiJono[100];
    char *mOsoitin;

    printf("Anna jokin merkkijono pienillä merkeillä: ");
    gets(merkkiJono);

    printf("Tulostan merkkijonon isoilla merkeillä: ");
    for(mOsoitin=merkkiJono; *mOsoitin != '\0'; mOsoitin++) {
        // %c: character, %d: integer
        printf("%c ", *mOsoitin - ('a' - 'A')); // voi käyttää myös: *mOsoitin-32
    }
    /*      Caesar Cipher:
     *          Plain:    A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
     *          Cipher:   X Y Z A B C D E F G H I J K L M N O P Q R S T U V W
     *
     *      Example:
     *          Plaintext:  THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
     *          Ciphertext: QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD
     */
    printf("\n\nCaesar Salaus\nAnna jokin plain-teksti isoiksi kirjaimiksi: ");
    gets(merkkiJono);

    printf("\nTulostan salattu-teksti isoiksi kirjaimiksi: ");

    for(mOsoitin=merkkiJono; *mOsoitin != '\0'; mOsoitin++) {

        // if the letter is A, B or C. or the input is space.
        if (*mOsoitin < 68) {
            // space = 32 as an integer in ASCII table
            if(*mOsoitin == 32){
                printf("%c ", *mOsoitin);
            }else
                printf("%c ", *mOsoitin + 23); // add 32 to print the cipher text in lowercase
        }else
            printf("%c ", *mOsoitin - 3); // add 32 to print the cipher text in lowercase
    }
    return 0;
}
