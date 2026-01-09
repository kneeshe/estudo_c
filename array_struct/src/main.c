#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int tipo1;
  int tipo2;
  int tipo3;
} No;

int main(){

  No *no1 = malloc(sizeof(No));
  No *no2 = malloc(sizeof(No));
  No *no3 = malloc(sizeof(No));


  no1->tipo1 = 1;
  no1->tipo2 = 2;
  no1->tipo3 = 3;

  no2->tipo1 = 4;
  no2->tipo2 = 5;
  no2->tipo3 = 6;

  no3->tipo1 = 7;
  no3->tipo2 = 8;
  no3->tipo3 = 9;

  No *array[3] = {no1, no2, no3}; 

  for(int i = 0; i < 3; i++){
    printf("%d\t %d\t %d\t\n", array[i]->tipo1, array[i]->tipo2, array[i]->tipo3);
  }

  return 0;
}
