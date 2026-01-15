#include <stdio.h>

int sum_digit(int digit){
  if( digit == 0 ){
    return 0;
  }
  int d = digit % 10;
  return d + sum_digit(digit / 10);
}

int main(){

  int x = sum_digit(243);
  printf("%d\n", x);

  return 0;
}

// while(score)
// {
//     printf("%d\n", score % 10);
//     score /= 10;
// }
