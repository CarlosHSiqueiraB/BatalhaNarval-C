#include <stdio.h>

int main(){ //Formal final do batalha narval, feito para treinar logica de programação com matrizes, por requisito de atividade da estácio

    int tabuleiro[10][10];
    int cruz[5][5]; //habilidade da cruz
    int cone[5][5]; //habilidade do cone
    int octaedro[5][5]; //habilidade do octaedro

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[1][i] = 3;
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == 2 || j == 2){
                cruz[i][j] = 1;
            }else{
                cruz[i][j] = 0;
            }
        }
    }
  
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(j >= 2 - i && j <= 2 + i){
                cone[i][j] = 1;
            }else{
                cone[i][j] = 0;
            }
        }
    }
  
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i + j >= 2 && i + j <= 6 && i - j <= 2 && j - i <= 2){
                octaedro[i][j] = 1;
            }else{
                octaedro[i][j] = 0;
            }
        }
    }
    int linha = 5;
    int coluna = 5;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int l = linha - 2 + i;
            int c = coluna - 2 + j;

            if(l >= 0 && l < 10 && c >= 0 && c < 10){
                if(cruz[i][j] == 1 && tabuleiro[l][c] == 0){
                    tabuleiro[l][c] = 4;
                }
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int l = 2 - 2 + i;   // posição diferente
            int c = 7 - 2 + j;

            if(l >= 0 && l < 10 && c >= 0 && c < 10){
                if(cone[i][j] == 1 && tabuleiro[l][c] == 0){
                    tabuleiro[l][c] = 5;
                }
            }
        }
    }
  
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int l = 7 - 2 + i;
            int c = 2 - 2 + j;

            if(l >= 0 && l < 10 && c >= 0 && c < 10){
                if(octaedro[i][j] == 1 && tabuleiro[l][c] == 0){
                    tabuleiro[l][c] = 6;
                }
            }
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
