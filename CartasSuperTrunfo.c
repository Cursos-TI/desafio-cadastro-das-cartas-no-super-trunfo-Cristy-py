//ENTREGA DE TRABALHO



//Estado (char)
//Codigo da carta (char[])
//População (int)
//Area em km² (Float)
//PIB (float)
//Numero de pontos turisticos (int)

//Seja bem vindo, este jogo possue somente duas castartas 1 e 2


# include <stdio.h>
int main(){


   char estado [50];
   char nome [100];
   int populacao, pontos, codigo; 
   float area, pib;

    printf("Seja Bem Vindo(a) JOGADOR 1\n\n");
    printf("PARA VER AS REGRAS DO JOGO.\n\nDigite aqui seu Nome:");
    scanf("%s", &nome );

    printf("ESTE JOGO SO POSSUE DUAS CARTAS, VOCE DEVE RESPONDER OS COMANDOS BASEADO EM CIDADES! \n\n## BOA SORTE! %s \n\n" , nome);


    // Criando carta 1



   printf ("Digite o Nome do Seu Estado favorito:\n");
   scanf ("%s", &estado);

   printf ("Digite o Codigo Postal:\n");
   scanf ("%d", &codigo);

   printf ("Digite a Quantidade Populacional:\n");
   scanf ("%d", &populacao);

   printf ("Digite Numero de Pontos Turisticos:\n");
   scanf ("%d", &pontos);

   printf ("Digite a Area em km:\n");
   scanf ("%f", &area);

   printf ("Digite o PIB\n");
   scanf ("%f", &pib);

   printf("\n\n ##RESULTADO JOGADOR 1:\n\n");
   

   printf(" - O SEU ESTADO: %s - COD POSTAL : %d\n - NUMERO POPULACIONAL: %d - TOTAL DE PONTOS TURISTICOS %d\n - AREA TOTAL : %f - PIB DE : %f\n\n",estado, codigo, populacao, pontos, area, pib);


   // criando carta 2



   printf("Ola, Seja Bem Vindo(a) JOAGADOR 2\n\n");
   printf("Digite seu nome:");
   scanf("%s", nome);

   printf("## VOCE JA SABE AS REGRAS, %s , Entao agora e sua vez, BOA SORTE!\n\n", nome);


   printf ("Digite o Nome do Seu Estado favorito:\n");
   scanf ("%s", &estado);

   printf ("Digite o Codigo Postal:\n");
   scanf ("%d", &codigo);

   printf ("Digite a Quantidade Populacional:\n");
   scanf ("%d", &populacao);

   printf ("Digite Numero de Pontos Turisticos:\n");
   scanf ("%d", &pontos);

   printf ("Digite a Area em km:\n");
   scanf ("%f", &area);

   printf ("Digite o PIB\n");
   scanf ("%f", &pib);

   printf("\n\n ##RESULTADO JOGADOR 2:\n\n");
   

   printf(" - O SEU ESTADO: %s - COD POSTAL : %d\n - NUMERO POPULACIONAL: %d - TOTAL DE PONTOS TURISTICOS %d\n - AREA TOTAL : %f - PIB DE : %f\n\n",estado, codigo, populacao, pontos, area, pib);

   // mensagem final 

   printf("## ESTE JOGO E APENAS UMA DEMO ##\n\n E ACABA AQUI, PARA SABER O RESULTADO: \n\n -VOCES DEVEM CALCULAR A SOMA DOS VALORES NUMERICOS,\n -QUEM TIVER A MAIOR SOMA.\n\n ## GANHA!! ##");











   return 0;








}