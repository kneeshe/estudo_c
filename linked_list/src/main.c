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
  No *quart = NULL;
  No *quint = NULL;

  no = malloc(sizeof(No));
  sec = malloc(sizeof(No));
  terc = malloc(sizeof(No));
  quart = malloc(sizeof(No));
  quint = malloc(sizeof(No));

  no->valor = 5;
  no->next = sec;

  sec->valor = 44;
  sec->next = terc;

  terc->valor = 43;
  terc->next = quart;

  quart->valor = 99;
  quart->next = quint;

  quint->valor = 1;
  quint->next = NULL;

  No *temp = NULL;
  temp = malloc(sizeof(No));
  temp = no;

  while(temp->next != NULL){
    printf("%d\n", temp->valor);
    temp = temp->next;
  }

   return 0;
}
