//Nome do país (string - usado apenas para exibir informações, não para comparação direta)
//População (int)
//Área (float)
//PIB (float)
//Número de pontos turísticos (int)
//Densidade demográfica (float - já calculada no desafio anterior).

// incluir notas bibliotecas
# include <stdio.h>
# include <stdlib.h>
# include <time.h>



int main() {



    char pais1 [50];
    char pais2 [50]; 
    int populacao1, populacao2, pontos1, pontos2, soma1, soma2;
    float densidade1, densidade2;
    float area1,area2, pib1, pib2;
   
  
    
//Número de pontos turísticos (int)
//Densidade demográfica (float - já calculada no desafio anterior).

//  CRIANDO CARTA  1
printf ("Digite o Nome do Pais Desejado: \n");
       scanf  ("%s", &pais1);
printf ("Digite o Indice Populacional: \n");
       scanf  ("%d", &populacao1); 
printf ("Digite a Quandidade de Pontos Turisticos: \n");
       scanf  ("%d", &pontos1); 
printf ("Digite a Area km: \n");
       scanf  ("%f", &area1); 
printf ("Digite o PIB: \n");
      scanf  ("%f", &pib1); 


// CALCULO DENSIDADE 
densidade1  =  (populacao1 + area1) /2 ;
printf("A MEDIA, DA SUA CARTA #DENCIDADE POPULACIONAL# E : %.2f\n", densidade1);




// CRINADO CARTA 2 


printf ("Digite o Nome do Pais Desejado: \n");
       scanf  ("%s", &pais2);
printf ("Digite o Indice Populacional: \n");
       scanf  ("%d", &populacao2); 
printf ("Digite a Quandidade de Pontos Turisticos: \n");
       scanf  ("%d", &pontos2); 
printf ("Digite a Area km: \n");
       scanf  ("%f", &area2); 
printf ("Digite o PIB: \n");
       scanf  ("%f", &pib2);

// CALCULO DENSIDADE 

// IF ELSE CARTA DESNSIDADE, MENOR VALOR GANHA 


float resultadodensidade1, resultadodensidade2;

resultadodensidade1 = (populacao1+area1)/2;
resultadodensidade2 = (populacao2+area2)/2;






if (resultadodensidade1 < resultadodensidade2){
    printf("##JOGADOR 1!## TEM A MENOR DENSIDADE POPULACIONAL!\n\n");
 }else if(resultadodensidade2 < resultadodensidade1){
    printf("##JOGADOR 2!## TEM A MENOR DENSIDADE POPULACIONAL!\n\n");
 }
 

// SOMA DO VENCEDOR 

int vencedor1, vencedor2;
vencedor1 = resultadodensidade1 + pontos1 + pib1;
vencedor2 = resultadodensidade2 + pontos2 + pib2;

if (vencedor1 > vencedor2){
  printf("### O JOGADOR 1 VENCEU ##\n\n");


} else if (vencedor2 > vencedor1)
{
  printf("### O JOGADOR 2 VENCEU ##\n\n");



} else { (vencedor1 == vencedor2);

   printf("DEU EMPATE\n\n");

}




/*O nome dos dois países.
O atributo usado na comparação.
Os valores do atributo para cada carta.
Qual carta venceu.
Em caso de empate, exibir a mensagem "Empate!".*/




// INSERIR MENU OPCAO CARTA 


int opcao; 
  printf("Digite o numero da carta que deseja comprar:\n\n");
  printf("## MENU DE COMPARACAO DE CARTAS : ##\n\n");
  printf("1. comparar cartas PONTOS TURISTICOS \n");
  printf("2. comparar cartas PIB \n");
  printf("3. comparar cartas DENSIDADE POPULACIONAL \n\n");
  printf("ESCOLHA UMA OPCAO !!\n\n");
         scanf("%d", &opcao);

switch (opcao)
{
case 1:
if (pontos1 > pontos2)
{
  printf("Jogador 1 tem carta maior soma total de PONTOS TURISTICOS: %d\n\n", pontos1 );
}else if (pontos1 < pontos2){
  printf("Jogador 2 tem carta maior soma total de PONTOS TURISTICOS: %d\n\n", pontos2);
}else
{
  (pontos1 == pontos2);
  printf("deu empate");
}
  break;
  case 2:
  if (pib1 > pib2)
  {
    printf("Jogador 1 tem carta maior soma total de PIB: %2.f\n\n", pib1);
  }else if (pib1 < pib2){
    printf("Jogador 2 tem carta maior soma total de PIB: %2.f\n\n", pib2);
  }else
  {
    (pib1 == pib2);
    printf("DEU EMPATE");
  }
  break;
  case 3:
  if (resultadodensidade1 < resultadodensidade2)
  {
    printf("Jogador 1 tem carta maior soma total de DENSIDADE: %2.f\n\n", densidade1);
  }else if (densidade1 > densidade2){
    printf("Jogador 2 tem carta maior soma total de DENSIDADE: %2.f\n\n", densidade2);
  }else
  {
    (densidade1 == densidade2);
    printf("DEU EMPATE\n\n");
  }
default:
  break;
}


}
