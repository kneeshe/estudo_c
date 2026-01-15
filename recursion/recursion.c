#include <stdio.h>

int soma_pares( int x ){
  if( x < 0 ){
    return 0;
  }

  return x + soma_pares(x - 2);
}


int main(){

  int a = soma_pares(3);
  
  printf("%d\n", a);

  return 0;
}
