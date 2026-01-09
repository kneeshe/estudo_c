#include <stdio.h>
#include <stdlib.h>

typedef struct { 
  float litros;
  float preco_base;
  float desconto;
} NOTA_FISCAL;

float calc_desc(float quantidade_litro, int tipo_comb);
float pag_cliente(float valor_desconto, int tipo_pag);


float preco_alcool = 20;
float preco_gasolina = 15;


int main(){
  // Alcool - tipo 1; Gasolina - tipo 2;
  // Pix/Dinheiro - tipo 1;

  float var_litros = 0;
  int var_tipo = 0;
  float var_preco = 0;

  NOTA_FISCAL *nota_fiscal = malloc(sizeof(NOTA_FISCAL));
  NOTA_FISCAL *nota_fiscal2 = malloc(sizeof(NOTA_FISCAL));

  NOTA_FISCAL *array_nota[2] = { nota_fiscal, nota_fiscal2 };

  // printf("Digite a quantidade de litros:\n");
  // scanf("%f", &var_litros);
  // printf("Digite o tipo de combustivel:\n1 - Alcool\n2 - Gasolina\n");
  // scanf("%d", &var_tipo);
  //
  nota_fiscal->litros = 1.1;
  nota_fiscal->preco_base = 2.2;
  nota_fiscal->desconto = 3.3;
  
  nota_fiscal2->litros = 4.4;
  nota_fiscal2->preco_base = 5.5;
  nota_fiscal2->desconto = 6.6;

    for( int b = 0; b < 2; b++ ){
      printf("%.2f\n", array_nota[b]->litros);
      printf("%.2f\n", array_nota[b]->preco_base);
      printf("%.2f\n", array_nota[b]->desconto);
    }

  return 0;
}


float calc_desc(float quantidade_litro, int tipo_comb){
  int desconto = 0;

  if(tipo_comb == 1){
    if(quantidade_litro >= 50){
      desconto = (preco_alcool * 0.03) + preco_alcool;
      return desconto;
    }
    else {
    desconto = (preco_alcool * 0.05) + preco_alcool;
      return desconto;
    }
  }

  if(tipo_comb == 2){
    if(quantidade_litro >= 50){
      desconto = (preco_gasolina * 0.02) + preco_gasolina;
      return desconto;
    }
    else {
    desconto = (preco_gasolina * 0.04) + preco_gasolina;
      return desconto;
    }
  }

  return 0;
}

float pag_cliente(float valor_desconto, int tipo_pag){
  if(tipo_pag == 1){
    int desconto = (valor_desconto * 0.02) + valor_desconto;
    return desconto;
  }
  else {
    return valor_desconto;
  }
  return 0;
}

