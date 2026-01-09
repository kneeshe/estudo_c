#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE{
  int valor;
  char nome[255];
  struct NODE *next;
} NODE;

int main(){

  // definicao primeira linked list
  NODE *no1 = NULL;
  no1 = malloc(sizeof(NODE));
  NODE *no2 = NULL;
  no2 = malloc(sizeof(NODE));
  NODE *no3 = NULL;
  no3 = malloc(sizeof(NODE));

  // definicao segunda linked list
  NODE *no4 = NULL;
  no4 = malloc(sizeof(NODE));
  NODE *no5 = NULL;
  no5 = malloc(sizeof(NODE));
  NODE *no6 = NULL;
  no6 = malloc(sizeof(NODE));

  // criação da linked list
  no1->valor = 1;
  strcpy(no1->nome, "Cris");
  no1->next = no2;

  no2->valor = 2;
  strcpy(no2->nome, "Agatha");
  no2->next = no3;

  no3->valor = 3;
  strcpy(no3->nome, "Diogo");
  no3->next = NULL;

  // criação da linked list
  no4->valor = 4;
  strcpy(no4->nome, "Nome");
  no4->next = no5;

  no5->valor = 5;
  strcpy(no5->nome, "Aleatorio");
  no5->next = no6;

  no6->valor = 6;
  strcpy(no6->nome, "Morte");
  no6->next = NULL;

  NODE *array[2] = { no1, no4 };

  for ( int i = 0; i < 2; i++ ){
    printf (" === Array %d === \n", i);
    while( array[i] != NULL){
      printf("%d\t", array[i]->valor);
      printf("%s\n", array[i]->nome);
      array[i] = array[i]->next;
    }
  }

  free(no1);
  free(no2);
  free(no3);
  free(no4);
  free(no5);
  free(no6);

 return 0;
}
