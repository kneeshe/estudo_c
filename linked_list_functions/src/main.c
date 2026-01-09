#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int valor;
  struct No *next;
} No;

int main(){

  No *no = NULL;
  No *sec = NULL;
  No *terc = NULL;

  no = malloc(sizeof(No));
  sec = malloc(sizeof(No));
  terc = malloc(sizeof(No));

  no->valor = 1;
  no->next = sec;

  sec->valor = 2;
  sec->next = terc;

  terc->valor = 3;
  terc->next = NULL;

  No *temp = NULL;
  temp = no;

  while(temp != NULL){
    printf("%d\n", temp->valor);
    temp = temp->next;
  }

   return 0;
}
