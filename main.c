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
    int scelta;

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

void AggiungiContatto(struct Contatto rubrica[], int nContatti){
    if (nContatti >= 100) {
        printf("spazio in rubrica pieno\n");
    }
    printf("inserisci il nome del contatto:\n");
    scanf("%29s", rubrica[nContatti].nome);
    printf("inserisci il cognome del contatto:\n");
    scanf("%29s", rubrica[nContatti].cognome);
    printf("inserisci il numero di telefono del contatto:\n");
    scanf("%14s", rubrica[nContatti].telefono);

    nContatti++;
    printf("Il contatto è stato aggiunto alla rubrica\n");

}
void VisualizzaContatto(struct Contatto rubrica[], int nContatti) {
    if (nContatti == 0) {
        printf("la rubrica è vuota, inserire un contatto per poterli visualizzare\n");
    }
    for (int i = 0; i < nContatti; i++) {
        printf("nome: %s\n", rubrica[i].nome);
        printf("cognome: %s\n", rubrica[i].cognome);
        printf("telefono: %s\n", rubrica[i].telefono);
    }
}
void CercaContatto(struct Contatto rubrica[], int nContatti) {
    char CognomeDaCercare [30];
    printf("Inserisci il cognome da cercare");
    scanf("%29s", &CognomeDaCercare);

    for (int i = 0; i < nContatti; i++) {
        if (rubrica[i].cognome == CognomeDaCercare) {
            printf("Contatto trovato");
            printf("nome: %s\n", rubrica[i].nome);
            printf("cognome: %s\n", rubrica[i].cognome);
            printf("telefono: %s\n", rubrica[i].telefono);
        }
        else {
            printf("Il contatto non è presente all'interno della rubrica");
        }
    }
}
void EliminaContatto (struct Contatto rubrica[], int nContatti) {
    char CognomeDaEliminare [30];
    printf("Inserisci il cognome del contatto da eliminare");
    scanf("%29s", &CognomeDaEliminare);

    for (int i = 0; i < nContatti; i++) {
        if (rubrica[i].cognome == CognomeDaEliminare) {
            rubrica[i].nome[0] = '\0';
            rubrica[i].cognome[0] = '\0';
            rubrica[i].telefono[0] = '\0';
            nContatti--;
            printf("contatto eliminato");
        }
        else {
            printf("questo contatto no è presente all'interno della rubrica");
        }
    }
}