#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Livre {
    int id;
    char titre[100];
    char auteur[100];
    char genre[50];
    char isbn[20];
    bool disponible;
    struct Livre *next;
} Livre;

typedef struct Utilisateur {
    int id;
    char nom[100];
    char adresse[200];
    char email[100];
    char telephone[20];
    struct Utilisateur *next;
    struct Utilisateur *prev;
} Utilisateur;

typedef struct Emprunt {
    int idLivre;
    int idUtilisateur;
    struct Emprunt *next;
} Emprunt;

typedef struct Queue {
    Emprunt *front;
    Emprunt *rear;
} Queue;

int main()
{
    printf("Hello world!\n");
    return 0;
}
