#include "Quadro.h"
#include <stdio.h>
#include <stdlib.h>

void IniciarQuadro(TipoQuadro *Quadro){
        int i,j;

        for(i=0;i<linha;i++){
            for(j=0;j<coluna;j++){
                if((i==linha-1) || (i==0)){
                    Quadro->quadro[i][j] = "-"; // desenhando as apartes de baixo e cima
                    continue;
                }

                if((j== coluna-1 )||(j==0)){
                    Quadro->quadro[i][j] = "'"; //desenhando as bordas
                    continue;
                }else{
                    Quadro->quadro[i][j] =" "; //espaço para o desenho
                }
            }
        }

}

void ImprimirQuadro(TipoQuadro Quadro){
    int i,j;

    for(i=0;i<linha;i++){
            printf("\n"); //quebra de linha
        for(j=0;j<coluna;i++){
            printf("%c",Quadro.quadro[i][j]);
        }
    }


}
void Asteristico(TipoQuadro *Quadro,int Quantidade){


}
void Soma(TipoQuadro *Quadro, int Quantidade){


}
void X(TipoQuadro *Quadro, int Quantidade){

}
void Aleatorio(TipoQuadro *Quadro, int Quantidade){

}
void Triangulo(TipoQuadro *Quadro, int Quantidade){


}
void Circulo(TipoQuadro * Quadro, int Quantidade){

}
int Maiorque100(int Quantidade){
    if(Quantidade >100){
        return 100;
    }else{
        return Quantidade;
    }

}
int Menorque0(int Quantidade){

    if(Quantidade<=0){
        return Quantidade;
    }
}
