#include <stdio.h>
#include <stdlib.h>
#include "quadro.h"



int main()
{
  printf("oi");
  TipoQuadro quadro;
  int escolhausuario, quantidadefiguras;
    
  printf("\n\nPROGRAMA GERADOR DE OBRA DE ARTE:\n"
          "=================================\n"
          "Escolha o tipo de figura basica a ser usada para criar a obra:\n"
          "1 - asterisco simples.\n"
          "2 - simbolo de soma com asteriscos.\n"
          "3 - letra X com asteriscos.\n"
          "4 - figuras aleatorias\n"
          "5 - obra do aluno\n"
          "===================================\n"
          "DIGITE 0 PARA SAIR DO PROGRAMA\n"
          "===================================\n");
  printf("Digite o tipo de figura basica desejada:");

  scanf("%d",&escolhausuario);
  while(escolhausuario!=0){
    IniciarQuadro(&quadro);
  
  if(escolhausuario ==1){
    
    printf("Digite a quantidade de figuras:");
    scanf("%d",&quantidadefiguras);
    quantidadefiguras = VerificaQuantidade(quantidadefiguras);
    
    Asteristico(&quadro,quantidadefiguras);
    ImprimirQuadro(quadro);

    int flag =1; 

    while(flag==1){
      printf("\ndeseja criar um novo quadro com as mesmas configuracoes?\nDigite 1 para SIM\n""- Digite 0 para NAO\n"); 
      scanf("%d",&flag);

      if(flag ==1){
        IniciarQuadro(&quadro);
        Asteristico(&quadro,quantidadefiguras);
        ImprimirQuadro(quadro);
      }else{
        system("cls");
        break;
      }
    }
  }

  if(escolhausuario ==2){
    
    printf("Digite a quantidade de figuras:");
    scanf("%d",&quantidadefiguras);
    quantidadefiguras = VerificaQuantidade(quantidadefiguras);
    
    Soma(&quadro,quantidadefiguras);
    ImprimirQuadro(quadro);

    int flag =1; 

    while(flag==1){
      printf("\ndeseja criar um novo quadro com as mesmas configuracoes?\nDigite 1 para SIM\n""- Digite 0 para NAO\n"); 
      scanf("%d",&flag);

      if(flag ==1){
        IniciarQuadro(&quadro);
        Soma(&quadro,quantidadefiguras);
        ImprimirQuadro(quadro);
      }else{
          system("cls");
        break;
      }
    }
  }

  if(escolhausuario ==3){
    
    printf("Digite a quantidade de figuras:");
    scanf("%d",&quantidadefiguras);
    quantidadefiguras = VerificaQuantidade(quantidadefiguras);
    
    X(&quadro,quantidadefiguras);
    ImprimirQuadro(quadro);

    int flag =1; 

    while(flag==1){
      printf("\ndeseja criar um novo quadro com as mesmas configuracoes?\nDigite 1 para SIM\n""- Digite 0 para NAO\n"); 
      scanf("%d",&flag);

      if(flag ==1){
        IniciarQuadro(&quadro);
        X(&quadro,quantidadefiguras);
        ImprimirQuadro(quadro);
      }else{
          system("cls");
        break;
      }
    }
  }

  if(escolhausuario ==4){
    
    printf("Digite a quantidade de figuras:");
    scanf("%d",&quantidadefiguras);
    quantidadefiguras = VerificaQuantidade(quantidadefiguras);
    
    Aleatorio(&quadro,quantidadefiguras);
    ImprimirQuadro(quadro);

    int flag =1; 

    while(flag==1){
      printf("\ndeseja criar um novo quadro com as mesmas configuracoes?\nDigite 1 para SIM\n""- Digite 0 para NAO\n"); 
      scanf("%d",&flag);

      if(flag ==1){
        IniciarQuadro(&quadro);
        Aleatorio(&quadro,quantidadefiguras);
        ImprimirQuadro(quadro);
      }else{
          system("cls");
        break;
      }
    }
  }

  if(escolhausuario ==5){
    
    printf("Digite a quantidade de figuras:");
    scanf("%d",&quantidadefiguras);
    quantidadefiguras = VerificaQuantidade(quantidadefiguras);
    
    ObraAluno(&quadro,quantidadefiguras);
    ImprimirQuadro(quadro);

    int flag =1; 

    while(flag==1){
      printf("\ndeseja criar um novo quadro com as mesmas configuracoes?\nDigite 1 para SIM\n""- Digite 0 para NAO\n"); 
      scanf("%d",&flag);

      if(flag ==1){
        IniciarQuadro(&quadro);
        ObraAluno(&quadro,quantidadefiguras);
        ImprimirQuadro(quadro);
      }else{
          system("cls");
        break;
      }
    }
  }
  
  
      printf("\n\nPROGRAMA GERADOR DE OBRA DE ARTE:\n"
          "=================================\n"
          "Escolha o tipo de figura basica a ser usada para criar a obra:\n"
          "1 - asterisco simples.\n"
          "2 - simbolo de soma com asteriscos.\n"
          "3 - letra X com asteriscos.\n"
          "4 - figuras aleatorias\n"
          "5 - obra do aluno\n"
          "===================================\n"
          "DIGITE 0 PARA SAIR DO PROGRAMA\n"
          "===================================\n");
  printf("Digite o tipo de figura basica desejada:");
  scanf("%d",&escolhausuario);



  }

  return 0;
}