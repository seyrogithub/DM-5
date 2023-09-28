#include <stdio.h>

void conversionBinaire (int decimal) {
    if (decimal > 0) {
        conversionBinaire(decimal / 2);
        printf("%d", decimal % 2);
    }
}

void conversionHexadecimal (int decimal){
    if (decimal > 0) {
        conversionHexadecimal(decimal / 16);
        int reste;
        reste = decimal % 16;
        if (reste < 10) {
            printf("%d", reste);
        } else {
            printf("%c", 'A' + reste - 10);
        }
    }
}

float sommeDesNotes (int n) {
    if (n == 0) {
        return 1;
    } else {
        float notes;
        printf("Entrez votre note sur 20 en arrondissant : \n", n);
        scanf("%f", &notes);
        return notes + sommeDesNotes(n - 1);
    }

}

int main() {
    int nombreDeNotes;
    printf("Combien de notes avez-vous ?\n");
    scanf("%d", &nombreDeNotes);
    float somme;
    float moyenne;
    somme = sommeDesNotes(nombreDeNotes);
    moyenne = somme / nombreDeNotes;
    printf("Voici votre moyenne en décimal : %.2f \n", moyenne);
    printf("Voici votre moyenne en binaire : ");
    conversionBinaire((int )moyenne);
    printf("\n Voici votre moyenne en hexadecimal : ");
    conversionHexadecimal((int )moyenne);


    return 0;
}
