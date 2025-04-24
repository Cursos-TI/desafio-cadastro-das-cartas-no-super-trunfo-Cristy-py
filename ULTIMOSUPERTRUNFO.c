//Estado (char)
//Codigo da carta (char[])
//População (int)
//Area em km² (Float)
//PIB (float)
//Numero de pontos turisticos (int)

//Seja bem vindo, este jogo possue somente duas castartas 1 e 2


# include <stdio.h>
int main() {


   char estado1 [50];
   char estado2 [50];
   char cidade1 [70];
   char cidade2 [70];
   char nome1 [60];
   char nome2 [100];
   float populacao1, populacao2, pontos1, pontos2, soma1, soma2;
   float densidade1, densidade2;
   float area1,area2, pib1, pib2;
   float pibpercapita1, pibpercapita2;
  

    printf("Seja Bem Vindo(a) JOGADOR 1\n\n");
    printf("PARA VER AS REGRAS DO JOGO.\n\nDigite aqui seu Nome:");
    scanf("%s", &nome1 );

    printf("ESTE JOGO SO POSSUE DUAS CARTAS, VOCE DEVE RESPONDER OS COMANDOS BASEADO EM ESTADOS! \n\n## BOA SORTE! %s \n\n" , nome1);


    // CRIANDO CARTA 1


   //  LEITURA ESTADO E CIDADE 
   printf ("Digite o Nome do Seu Estado favorito:\n");
   scanf ("%s", &estado1);
   printf ("Digite o Nome da Cidade:\n");
   scanf ("%s", &cidade1);
    


   // LEITURA POPULACAO , AREA DA CIDADE E PIB 
   printf ("Digite a Area em km:\n");
   scanf ("%f", &area1);
   printf ("Digite a Quantidade Populacional:\n");
   scanf ("%f", &populacao1);
   printf ("Digite o PIB\n");
   scanf ("%f", &pib1);

   // LEITURA PONTOS TURISTICOS E DENSIDADE

   printf ("Digite Numero de Pontos Turisticos:\n");
   scanf ("%f", &pontos1);
   printf ("Digite a Densidade Populacional:\n");
   scanf ("%f", &densidade1); 


   printf("\n\n ##RESULTADO JOGADOR 1:\n\n");
   

   printf(" - O SEU ESTADO: %s - DENC. DEMOGRAF. : %f\n - NUMERO POPULACIONAL: %f - TOTAL DE PONTOS TURISTICOS %f\n - AREA TOTAL : %f - PIB DE : %f\n\n",estado1, densidade1, populacao1, pontos1, area1, pib1);
    
   // SOMA1
   soma1= densidade1 + populacao1+ pontos1+ area1 + pib1;
   printf("Seu Resultado e :  %f\n\n", soma1 )/2;

    // DIVISAO DE RESULTADOS 
   // VAREAVEL (DENSIDADE POPULACIONAL)   EQUACAO : POPULACAO / AREA 


    densidade1 =  (populacao1 + area1) /2 ;
    pibpercapita1 = (pib1 + populacao1) /2 ;
    printf("A MEDIA, DA SUA CARTA #DENCIDADE POPULACIONAL# E : %.2f\nA MEDIA, DA SUA CARTA #PIB PERCAPITA# E : %.2f\n\n", densidade1, pibpercapita1);

    // VAREAVEL (DENSIDADE POPULACIONAL)   EQUACAO : PIB / POPULACAO  

  




   // CRIANDO CARTA 2

   printf("Ola, Seja Bem Vindo(a) JOGADOR 2\n\n");
   printf("Digite seu nome:");
   scanf("%s", nome2);

   printf("## VOCE JA SABE AS REGRAS, %s , Entao agora e sua vez, BOA SORTE!\n\n", nome2);

      //  LEITURA ESTADO E CIDADE 
      printf ("Digite o Nome do Seu Estado favorito:\n");
      scanf ("%s", &estado2);
      printf ("Digite o Nome da Cidade:\n");
      scanf ("%s", &cidade2);
       
   
   
      // LEITURA POPULACAO , AREA DA CIDADE E PIB 
      printf ("Digite a Area em km:\n");
      scanf ("%f", &area2);
      printf ("Digite a Quantidade Populacional:\n");
      scanf ("%f", &populacao2);
      printf ("Digite o PIB\n");
      scanf ("%f", &pib2);
   
      // LEITURA PONTOS TURISTICOS E DENSIDADE
   
      printf ("Digite Numero de Pontos Turisticos:\n");
      scanf ("%f", &pontos2);
      printf ("Digite a Densidade Populacional:\n");
      scanf ("%f", &densidade2); 
   
   
      printf("\n\n ##RESULTADO JOGADOR 1:\n\n");
      
   
      printf(" - O SEU ESTADO: %s - DENC. DEMOGRAF. : %.2f\n - NUMERO POPULACIONAL: %.2f - TOTAL DE PONTOS TURISTICOS %.2f\n - AREA TOTAL : %.2f - PIB DE : %.2f\n\n",estado2, densidade2, populacao2, pontos2, area2, pib2);
       
      // SOMA1
   
      soma2= densidade2+ populacao2 + pontos2 + area2 + pib2;
      printf("Seu Resultado e :  %.2f\n\n", soma2 );
   
   
    
       // VAREAVEL (DENSIDADE POPULACIONAL)   EQUACAO : PIB / POPULACAO  

       printf(" ##RESULTADO##  QUEM TIVER A CARTA #RIQUEZA#, COM MAIORES VALORES, VENCE!!!\n\n");

      printf("JOGADOR 1\n\n");

       densidade1 =  (populacao1 + area1) /2 ;
       pibpercapita1 = (pib1 + populacao1) /2 ;
       printf("A MEDIA, DA SUA CARTA #DENSIDADE POPULACIONAL# E : %.2f\nA MEDIA, DA SUA CARTA #RIQUEZA# E : %.2f\n\n", densidade1, pibpercapita1);
       
       
       
      printf("JOGADOR 2\n\n");

       densidade2 =  (populacao2 + area2) /2 ;
       pibpercapita2 = (pib2  + populacao2) /2 ;
       printf("A MEDIA, DA SUA CARTA #DENSIDADE POPULACIONAL# E : %.2f\nA MEDIA, DA SUA CARTA #RIQUEZA# E : %.2f\n\n", densidade2, pibpercapita2);
   

  

 // CARTA SUPER PODER CARTA 1
 // POPULACAO+AREA+PIBPER+DENSIDADE INVERTIDA PARA COMPARAÇÃO + PONTOS
 float superpoder1;
 float superpoder2;

 superpoder1 = populacao1 + area1+ pib1 + pibpercapita1 + 1/ densidade1 + pontos1;
 printf("O VALOR DO SEU ##SUPER PODER1## E:%.2f\n\n",superpoder1); 

//CARTA SUPER PODER 2

superpoder2 = populacao2 + area2+ pib2 + pibpercapita2 + 1/ densidade2 + pontos2;
 printf("O VALOR DO SEU ##SUPER PODER2## E:%.2f\n\n",superpoder2); 


// INSERINDO VERDADEIRO OU FALSO 
//IF ELSE CARTA1 DENSIDADE POPULACIONAL(CARTA COM MENOR VALOR VENCE) ECQUACAO: POPULACAO/AREA
// COLOCAR MENSAGEM DE COMPARACAO 

printf("R E S U L T A D O S   F I N A I S !\n\n\n");



float resultadodensidade1, resultadodensidade2;

resultadodensidade1 = (populacao1+area1)/2;
resultadodensidade2 = (populacao2+area2)/2;


if (resultadodensidade1<resultadodensidade2){
   printf("##JOGADOR 1 VENCEU!## TEM A MENOR DENSIDADE POPULACIONAL!\n\n");
}else{
   printf("##JOGADOR 2 VENCEU!## TEM A MENOR DENSIDADE POPULACIONAL!\n\n");
}


// INSERINDO IF ELSE PIB PERCAPTA ( CARTA COM MAIOR VALOR VENCE) ECQUACAO: PIB/POPULACAO
// COLOCAR MENSAGEM DE COMPRACAO 

if (pibpercapita1>pibpercapita2) {
   printf("##JOGADOR 1 VENCEU!## COM A MAIOR PIP PERCAPTA!!\n\n");
}else {
   printf("##JOGADOR 2 VENCEU!## COM A MAIOR PIP PERCAPTA!!\n\n"); 
}

// IF ELSE DE PONTOS TURISTICOS 

if (pontos1+pontos2){
   printf("##JOGADOR 1 VENCEU!## TEM MAIS PONTOS TURISTICOS!!\n\n");
      
}else{
   printf("##JOGADOR 2 VENCEU!##  TEM MAIS PONTOS TURISTICOS!!\n\n\n\n");
}



// RESULTADO GERAL DE VENCEDOR DENSIDADE +PIBPERCAPTA + PONTOS TURISTICOS + SUPER PODER1+ SUPER PODER2

printf("G A N H A D O R\n\n\n\n");

float ganhador1, ganhador2;
ganhador1 = pibpercapita1 + pontos1 + superpoder1 + resultadodensidade1;
ganhador2 = pibpercapita2 + pontos2 + superpoder2 + resultadodensidade2;

if (ganhador1>ganhador2){
   printf("PARABENS JOGADOR 1 VOCE E O GANHADOR, !!%s, %s, %s\n\n",nome1, estado1, cidade1);
}else{
   printf("PARABENS JOGADOR 2 VOCE E O GANHADOR,!! %s, %s, %s\n\n",nome2, estado2, cidade2);

}









}
