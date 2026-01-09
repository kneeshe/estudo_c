#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node {
  int valor;
  char text[50];
  struct Node *next;
}Node;

int main(){

  Node *head;
  Node *middle;
  Node *tail;

  char buffer[11];

  head = malloc(sizeof(Node));
  middle = malloc(sizeof(Node));
  tail = malloc(sizeof(Node));

  printf("Agenda de tarefas\n");
  printf("==================\n");

  printf("Digite a primeira tarefa e o valor dela: \n");
  printf("Tarefa => ");
  scanf("%s", buffer);
  strcpy(head->text, buffer);
  printf("\n");
  printf("Valor => ");
  scanf("%d", &head->valor);
  head->next = middle;

  printf("Digite a segunda tarefa e o valor dela: \n");
  printf("Tarefa => ");
  scanf("%s", buffer);
  strcpy(middle->text, buffer);
  printf("\n");
  printf("Valor => ");
  scanf("%d", &middle->valor);
  middle->next = tail;

  printf("Digite a terceira tarefa e o valor dela: \n");
  printf("Tarefa => ");
  scanf("%s", buffer);
  strcpy(tail->text, buffer);
  printf("\n");
  printf("Valor => ");
  scanf("%d", &tail->valor);
  tail->next = NULL;

  Node *temp = head;
  while(temp != NULL){
    printf("%s\t", temp->text);
    printf("%d", temp->valor);
    temp = temp->next;
  }
  return 0;
}
