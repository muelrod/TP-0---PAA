#ifndef QUADRO_H_INCLUDED
#define QUADRO_H_INCLUDED

#define coluna 80
#define linha 20

typedef struct{

    char quadro[linha][coluna];

}TipoQuadro;

void IniciarQuadro(TipoQuadro *Quadro);
void ImprimirQuadro(TipoQuadro Quadro);
void Asteristico(TipoQuadro *Quadro,int Quantidade);
void Soma(TipoQuadro *Quadro, int Quantidade);
void X(TipoQuadro *Quadro, int Quantidade);
void Aleatorio(TipoQuadro *Quadro, int Quantidade);
void Desenhovaquinha(TipoQuadro *Quadro, int Quantidade);
int VerificaQuantidade(int Quantidade);
int verificaEspacoMatriz(int linhaAleatoria,int colunaAleatoria);

#endif // QUADRO_H_INCLUDED
