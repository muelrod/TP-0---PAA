#include "quadro.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h> 

void IniciarQuadro(TipoQuadro *Quadro){
        int i,j;
        for(i=0;i<linha;i++){
            for(j=0;j<coluna;j++){
                if(i==linha-1 || i==0){
                    Quadro->quadro[i][j] = '-'; // desenhando as apartes de baixo e cima
                    continue;
                }

                if(j== coluna-1 ||j==0){
                    Quadro->quadro[i][j] = '|'; //desenhando as bordas
                    continue;
                }else{
                    Quadro->quadro[i][j] = ' '; //espaço para o desenho
                }
            }
        }
}

void ImprimirQuadro(TipoQuadro Quadro){
    int i,j;
    for(i=0;i<linha;i++){
            printf("\n"); //quebra de linha
        for(j=0;j<coluna;j++){
            printf("%c",Quadro.quadro[i][j]);
        }
    }
}

void Asteristico(TipoQuadro *Quadro,int Quantidade){
  int i,j;
  srand(time(NULL));
  Quantidade = VerificaQuantidade(Quantidade);
  for(i=0;i<Quantidade;i++){
    while(1){
      int colunaAleatoria = rand() % 77+1;
      int linhaAleatoria = rand() % 17 +1;
      if(Quadro->quadro[linhaAleatoria][colunaAleatoria]==' '){
        Quadro->quadro[linhaAleatoria][colunaAleatoria] = '*';
        break;
      }  
    }     
  }
}


void Soma(TipoQuadro *Quadro, int Quantidade){
  int i,j;
  srand(time(NULL));
  Quantidade = VerificaQuantidade(Quantidade);
  for(i=0;i<Quantidade;i++){
    while(1){
      int colunaAleatoria = rand() % 77 + 1;
      int linhaAleatoria = rand() % 17 +1;
      int emcima,embaixo,direita, esquerda;
      emcima = colunaAleatoria + 1;
      embaixo = colunaAleatoria - 1;
      direita = linhaAleatoria + 1;
      esquerda = linhaAleatoria - 1;
      int flag = 0;
      if(emcima>=1 && emcima<=78){
        if(embaixo>=1 && embaixo<=78){
          if(direita>=1 && direita<=18){
            if(esquerda>=1 && esquerda<=18){
              flag = 1;
            }
          }
        }
      }
      if(flag ==1){
        if((Quadro->quadro[linhaAleatoria][colunaAleatoria]==' ')
         && (Quadro->quadro[linhaAleatoria-1][colunaAleatoria]==' ')
        && (Quadro->quadro[linhaAleatoria+1][colunaAleatoria]==' ') 
        && (Quadro->quadro[linhaAleatoria][colunaAleatoria+1]==' ') 
        && (Quadro->quadro[linhaAleatoria][colunaAleatoria-1]==' ')){

          Quadro->quadro[linhaAleatoria+1][colunaAleatoria]='*';
          Quadro->quadro[linhaAleatoria-1][colunaAleatoria]='*';
          Quadro->quadro[linhaAleatoria][colunaAleatoria-1]='*';
          Quadro->quadro[linhaAleatoria][colunaAleatoria+1]='*';
          Quadro->quadro[linhaAleatoria][colunaAleatoria]='*';
          break;
        }
      }
      
    }  
  }     
}

void X(TipoQuadro *Quadro, int Quantidade){
  int i,j;
  srand(time(NULL));
  Quantidade = VerificaQuantidade(Quantidade);
  for(i=0;i<Quantidade;i++){
    while(1){
      int colunaAleatoria = rand() % 77 + 1;
      int linhaAleatoria = rand() % 17 +1;
      int emcima,embaixo,direita, esquerda;
      emcima = colunaAleatoria + 1;
      embaixo = colunaAleatoria - 1;
      direita = linhaAleatoria + 1;
      esquerda = linhaAleatoria - 1;
      int flag = 0;
      if(emcima>=1 && emcima<=78){
        if(embaixo>=1 && embaixo<=78){
          if(direita>=1 && direita<=18){
            if(esquerda>=1 && esquerda<=18){
              flag = 1;
            }
          }
        }
      }
      if(flag ==1){
        if((Quadro->quadro[linhaAleatoria][colunaAleatoria]==' ') && (Quadro->quadro[linhaAleatoria-1][colunaAleatoria+1]==' ')
        && (Quadro->quadro[linhaAleatoria-1][colunaAleatoria-1]==' ') && (Quadro->quadro[linhaAleatoria+1][colunaAleatoria-1]==' ') && (Quadro->quadro[linhaAleatoria+1][colunaAleatoria+1]==' ')){
          Quadro->quadro[linhaAleatoria-1][colunaAleatoria+1]='*';
          Quadro->quadro[linhaAleatoria-1][colunaAleatoria-1]='*';
          Quadro->quadro[linhaAleatoria+1][colunaAleatoria-1]='*';
          Quadro->quadro[linhaAleatoria+1][colunaAleatoria+1]='*';
          Quadro->quadro[linhaAleatoria][colunaAleatoria]='*';
          break;
        }
      }
      
    }  
  } 
}

void Aleatorio(TipoQuadro *Quadro, int Quantidade){
  int i;
  srand(time(NULL));
  Quantidade = VerificaQuantidade(Quantidade); 
  for(i=0;i<Quantidade;i++){
    int escolhe = rand()%3 + 1;
    if(escolhe == 1)
      Soma(Quadro, 1);
    else if(escolhe == 2)
      Asteristico(Quadro,1);
    else
      X(Quadro,1);
  }
  
}


void Desenhovaquinha(TipoQuadro *Quadro, int Quantidade){
  int i,j,valor;
  srand(time(NULL));
  Quantidade = VerificaQuantidade(Quantidade);
  if(Quantidade>45){
    Quantidade = 45;
  }
  for(i=0;i<Quantidade;i++){
    while(1){
      int colunaAleatoria = rand() % 77 + 1;
      int linhaAleatoria = rand() % 17 +1;
      int flag = verificaEspacoMatriz(linhaAleatoria,colunaAleatoria);

      if(flag ==1){
        if((Quadro->quadro[linhaAleatoria][colunaAleatoria]==' ') 
        && (Quadro->quadro[linhaAleatoria][colunaAleatoria+2]==' ') 
        &&(Quadro->quadro[linhaAleatoria][colunaAleatoria-2]==' ') 
        && (Quadro->quadro[linhaAleatoria][colunaAleatoria+1]==' ') 
        &&(Quadro->quadro[linhaAleatoria][colunaAleatoria-1]==' ') 
        
        &&(Quadro->quadro[linhaAleatoria-1][colunaAleatoria]==' ')
        &&(Quadro->quadro[linhaAleatoria-1][colunaAleatoria+1]==' ')
        && (Quadro->quadro[linhaAleatoria-1][colunaAleatoria-1]==' ')
        &&(Quadro->quadro[linhaAleatoria-1][colunaAleatoria+2]==' ')
        && (Quadro->quadro[linhaAleatoria-1][colunaAleatoria-2]==' ')

        &&(Quadro->quadro[linhaAleatoria+1][colunaAleatoria+2]==' ')
        &&(Quadro->quadro[linhaAleatoria+1][colunaAleatoria-2]==' ') 
        &&(Quadro->quadro[linhaAleatoria+1][colunaAleatoria+1]==' ')
        &&(Quadro->quadro[linhaAleatoria+1][colunaAleatoria-1]==' ')

        && (Quadro->quadro[linhaAleatoria+2][colunaAleatoria+1]==' ') 
        && (Quadro->quadro[linhaAleatoria+2][colunaAleatoria]==' ')
        && (Quadro->quadro[linhaAleatoria+2][colunaAleatoria-1]==' ')){
          int escolhe = rand()%3+1;
          if(escolhe==1){
            Quadro->quadro[linhaAleatoria][colunaAleatoria]=',';
            Quadro->quadro[linhaAleatoria][colunaAleatoria+1]='O';
            Quadro->quadro[linhaAleatoria][colunaAleatoria-1]='O';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria]='_';
            Quadro->quadro[linhaAleatoria+2][colunaAleatoria]=';';
            Quadro->quadro[linhaAleatoria+2][colunaAleatoria+1]=';';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria-1]='^';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria+1]='^';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria]='-';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria+1]=';';
            Quadro->quadro[linhaAleatoria][colunaAleatoria-2]='(';
            Quadro->quadro[linhaAleatoria][colunaAleatoria+2]=')';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria+1]='_';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria+2]=')';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria-1]=')';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria-2]='/';
            break;
          }
          else if(escolhe==2){
            
            Quadro->quadro[linhaAleatoria][colunaAleatoria]='>';
            Quadro->quadro[linhaAleatoria][colunaAleatoria+1]='o';
            Quadro->quadro[linhaAleatoria][colunaAleatoria-1]='o';
            Quadro->quadro[linhaAleatoria+2][colunaAleatoria]='/';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria]='_';
            Quadro->quadro[linhaAleatoria+2][colunaAleatoria+1]='\\';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria-1]='\\';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria+1]=' ';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria]='\\';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria+1]=';';
            Quadro->quadro[linhaAleatoria][colunaAleatoria-2]='(';
            Quadro->quadro[linhaAleatoria][colunaAleatoria+2]=')';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria+1]='_';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria+2]=')';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria-1]=')';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria-2]='/';
            break;
          }else{
            Quadro->quadro[linhaAleatoria][colunaAleatoria]='.';
            Quadro->quadro[linhaAleatoria][colunaAleatoria+1]='-';
            Quadro->quadro[linhaAleatoria][colunaAleatoria-1]='-';
            Quadro->quadro[linhaAleatoria][colunaAleatoria+2]=')';
            Quadro->quadro[linhaAleatoria][colunaAleatoria-2]='(';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria]=')';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria]=' ';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria+1]='(';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria+2]=')';
            Quadro->quadro[linhaAleatoria+1][colunaAleatoria-1]='(';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria+2]=')';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria+1]='(';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria+2]='\\';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria-1]='\\';
            Quadro->quadro[linhaAleatoria-1][colunaAleatoria-2]='(';
            break;
          }
        }
      }
    }  
  } 
}


int verificaEspacoMatriz(int linhaAleatoria,int colunaAleatoria){
  int emcima,embaixo,direita, esquerda;
  emcima = linhaAleatoria - 1;
  embaixo = linhaAleatoria + 2;
  direita = colunaAleatoria + 2;
  esquerda = colunaAleatoria - 2;
  int flag = 0;
  if(emcima>=1 && emcima<=18){
    if(embaixo>=1 && embaixo<=18){
      if(direita>=1 && direita<=77){
        if(esquerda>=1 && esquerda<=77){
          flag = 1;
        }
      }
    }
  }
  return flag;
}

int VerificaQuantidade(int Quantidade){
  if(Quantidade<=0){
    Quantidade = rand()%99 + 1;
    return Quantidade;
  }
  if(Quantidade >100){
    return 100;
  }
  else{
    return Quantidade;
  }
}



