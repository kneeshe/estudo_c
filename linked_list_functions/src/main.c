#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int valor;
  struct Node *next;
} Node;

// função para criar nodes
void insert_node( Node **head, int valor ){
  Node *new = malloc(sizeof(Node)); // cria e aloca node

  if ( new == NULL ){ // verifica se criou
    exit(2);
  }

  new->valor = valor; // atribui valor
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
    printf("%d\n", tmp->valor);
    tmp = tmp->next;
  }
}

int main(){
  Node *head = NULL;
  
  insert_node(&head, 4);
  insert_node(&head, 3);
  insert_node(&head, 8);
  insert_node(&head, 9);
  insert_node(&head, 5);

  list_content(&head);

  free(head);

   return 0;
}
