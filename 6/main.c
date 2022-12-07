#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct island { 
char *name;
char *opens;
char *closes;
struct island *next;
} island;

void display (island *start) {
    island *i = start;
    for (; i !=NULL; i = i->next) {
        printf("Название: %s Открыт: %s - %s\n", i->name,i->opens,i->closes);
    }
}

island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = name;
    i->opens = "";
    i->closes = "";
    i->next = NULL;
    return i;
}

int main () {
    setlocale(LC_ALL, "Russian");

    island *amity = malloc(sizeof(island));
    amity->name = "Дружбы";
    amity->opens = "09:00";
    amity->closes = "18:00";

    island  *craggy= malloc(sizeof(island));
    craggy->name = "Скалистый";
    craggy->opens = "09:00";
    craggy->closes = "18:00";

    island *isla_nublar = malloc(sizeof(island));
    isla_nublar->name = "Туманный";
    isla_nublar->opens = "09:00";
    isla_nublar->closes = "18:00";

    island *shutter = malloc(sizeof(island));
    shutter->name = "Проклятых";
    shutter->opens = "09:00";
    shutter->closes = "18:00";
   
    amity->next = craggy;
    craggy->next = isla_nublar;
    isla_nublar->next = shutter;

    display(amity);
    return 0;
}