#include <stdio.h>


struct Contatto
{
    char nome[30];
    char cognome[30];
    char telefono[15];
};
void AggiungiContatto(struct Contatto rubrica[], int nContatti);
void VisualizzaContatto(struct Contatto rubrica[], int nContatti);
void CercaContatto(struct Contatto rubrica[], int nContatti);
void EliminaContatto(struct Contatto rubrica[], int nContatti);
int main(void) {
    struct Contatto rubrica[100];
    int nContatti = 0;
    int scelta

    do {
        printf("\n -----RUBRICA-----\n");
        printf("1. Aggiungi un contatto alla rubrica\n");
        printf("2. Visualizza un contatto dalla rubrica \n");
        printf("3.Cerca un contatto tramite il cognome dalla rubrica\n");
        printf("4. Elimina un contatto tramite il cognome dalla rubrica\n");
        printf("5. Esci\n");
        scanf("%d",&scelta);
        if (scelta == 1) {
            AggiungiContatto(rubrica, nContatti);
        }
        else if (scelta == 2) {
            VisualizzaContatto(rubrica, nContatti);
        }
        else if (scelta == 3) {
            CercaContatto(rubrica, nContatti);
        }
        else if (scelta == 4) {
            EliminaContatto(rubrica, nContatti);
        }
    }while (scelta != 5);

    printf("Hai terminato il programma!");
    return 0;
}

