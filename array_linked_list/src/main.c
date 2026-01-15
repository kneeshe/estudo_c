#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE{
  int valor;
  char nome[255];
  struct NODE *next;
} NODE;

void insert_note(NODE **root, int valor, char *nome){
  NODE *new = malloc(sizeof(NODE));

  if( new == NULL ){ // verifica se o new foi alocado corretamente
    exit(1);
  }

  new->valor = valor;
  strcpy(new->nome, nome);

  if(*root == NULL){ // verifica se a raiz existe. se não, aloca a raiz ao new node
    *root = new;
    return;
  }

  NODE *cur = *root;
  while(cur->next != NULL){
    cur = cur->next;
  }
  cur->next = new;
}

void list_node(NODE **root){
  NODE *cur = *root;
  while (cur != NULL) {
    printf("%d\t%s\n", cur->valor, cur->nome);
    cur = cur->next;
  }
  printf("\n");
}

int main(){

  NODE *root = NULL;
  NODE *middle = NULL;
  NODE *tail = NULL;

  char nome[255];

  printf("Digite um nome: ");
  // scanf("%s", nome);
  fgets(nome, sizeof(nome), stdin);

  insert_note(&root, 4, nome);
  insert_note(&root, 5, "oioi");
  insert_note(&root, 6, "ecaeca");

  insert_note(&middle, 12, "teses");
  insert_note(&middle, 2, "adaded");
  insert_note(&middle, 1, "reedede");

  insert_note(&tail, 8, "efepde");
  insert_note(&tail, 8, "dedede");
  insert_note(&tail, 8, "epdelde");

  NODE *array[3] = { root, middle, tail };
 
  for( int i = 0; i < 3; i++ ){
    list_node(&array[i]);
  }

  free(root);
  free(middle);
  free(tail);

 return 0;
}
