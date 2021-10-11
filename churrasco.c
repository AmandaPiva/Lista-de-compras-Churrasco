/*Faça um programa que receba:
Quantidade de homens.
Quantidade de mulheres.
Quantidade de crianças.
Quantidade de horas de duração de um churrasco.

Calcular e mostrar uma lista de compra de 10 itens para um churrasco, considerando a quantidade de pessoas e a duração do churrasco.
A lista de compras deverá constar:
   - Quantidade de cada item (se for o caso, como quantidade de pão, latas de refrigerante, pacotes, etc..
   - Quilos de cada item (se for o caso), como carne, linguiça, etc...
A lista de compra deverá ter o total a ser comprado.
*/

#include <stdio.h> 
#include <locale.h>
#include <math.h>

int main (){ 
		
	setlocale(LC_ALL, "Portuguese");
	
	float quant_woman, quant_man, quant_kids, quant_teens, soda, beer, garlic_bread, coal, cheese, salt, quant_hours, rib, wave, sausage; 
	
	//quant de pessoas e horas	
	printf("Quantos homens vão ao churrasco? ");
	scanf("%f", &quant_man);
	
	printf("Quantas mulheres vão ao churrasco? ");
	scanf("%f", &quant_woman);

	printf("Quantas crianças vão ao churrasco? ");
	scanf("%f", &quant_kids);
	
	printf("Quantas horas terá seu churrasco? ");
	scanf("%f", &quant_hours);
	
	quant_hours = (quant_hours+1)/2; //formula para não dar valores absurdos
	
	//itens da lista
	rib = ((quant_woman *  100 + quant_man * 100 + quant_kids * 50)/1000) * quant_hours;
	 
	wave = ((quant_woman * 100 + quant_man * 100 + quant_kids * 50)/1000) * quant_hours;
	 
	sausage = ((quant_woman * 100 + quant_man * 100 + quant_kids * 50)/1000) * quant_hours;
	 
	soda = ((quant_woman * 400 + quant_man * 400 + quant_kids * 400)/2000) * quant_hours;
	 
	beer = ((quant_woman * 700 + quant_man * 900)/350) * quant_hours;
	 
	garlic_bread = ((quant_woman * 90 + quant_man * 90 + quant_kids * 90)/350)* quant_hours;
	 
	salt = ((rib + wave + sausage)/20);
	 
	coal = ((rib + wave + sausage)/10);
	 
	cheese = ((quant_woman * 71 + quant_man * 71 + quant_kids * 71)/497)* quant_hours;
	 
	printf("\n---------- Lista de compras ----------");
	printf("\n\n%  .1f Kg de Costela;", rib);
	printf("\n\n%  .1f Kg de Acem;", wave);
	printf("\n\n%  .1f Kg de Linguiça;", sausage);
	printf("\n\n%  .0f garrafas de refrigerante de 2 litros;", ceil(soda));
	printf("\n\n%  .0f latinhas de cerveja de 350ml;", ceil(beer));
	printf("\n\n%  .0f Pacotes de pão de alho;", garlic_bread);
	printf("\n\n%  .0f Pacote de sal;", ceil(salt));
	printf("\n\n%  .0f Pacote de carvão;", ceil(coal));
	printf("\n\n%  .0f Pacotes de queijo coalho.", ceil(cheese));	
	
	return 0; 
	
}
