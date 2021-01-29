#include <stdio.h>
int main()
{
    char eka[25], toka[25]; // taulukot
    int i=0,j=0;
    char *ptr1, *ptr2; // pointterit

    ptr1=eka;
    ptr2=toka;

    printf("Syötä eka merkkijono:");
    gets(eka);

    printf("\nSyötä toka merkkijono:");
    gets(toka);
    while(eka[i] != '\0')
    {
        ++ptr1;
        i++;
    }
    while(toka[j] != '\0')
    {
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
        j++;
    }
    printf("\nMerkkijonot yhdistettynä: %s", eka);
    return 0;
}
