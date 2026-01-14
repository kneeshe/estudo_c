#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  int valor;
  char nome[255];
  struct Node *next;
} Node;

// função para criar nodes
void insert_node( Node **head, int valor, char *nome){
  Node *new = malloc(sizeof(Node)); // cria e aloca node

  if ( new == NULL ){ // verifica se criou
    exit(2);
  }

  new->valor = valor; // atribui valor
  strcpy(new->nome, nome);
  new->next = NULL; // aponta para null

  if ( *head == NULL ) { // verifica se lista é vazia
    *head = new; // se vazia, cria head e aponta new
    return;
  }

  Node *cur = *head; // no/ponteiro para o node atual
  while (cur->next != NULL) { // atravessa os nodes ate achar o vazio
    cur = cur->next; // associa o cur ao node vazio
  }
  cur->next = new; // aponta o ponteiro para o novo node
}

void list_content( Node **head ) {
  Node *tmp = *head;
  while( tmp != NULL ) {
    printf("%d\t %s\n", tmp->valor, tmp->nome);
    tmp = tmp->next;
  }
}

int main(){
  Node *head = NULL;
  
  int num_nos = 0;
  int valor = 0;
  char nome[255];

  printf("Quantos nós deseja criar? ");
  scanf("%d", &num_nos);

  for(int i = 0; i < num_nos; i++){
    printf("Digite o valor a inserir: ");
    scanf("%d", &valor);
    printf("Digite o nome: ");
    scanf("%s", nome);
    insert_node(&head, valor, nome);
  }

  list_content(&head);

  free(head);

   return 0;
}
