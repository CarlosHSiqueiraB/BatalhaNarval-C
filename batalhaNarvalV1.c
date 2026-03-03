#include <stdio.h>

int main(){

    int tabuleiro[10][10];
    printf("Batalha Narval\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
    for(int i =0; i<3; i++){
        tabuleiro[0][i]=3;
        for(int j=6; j<28; j++){
            if(j== 7 || j== 17 ||j== 27){
              tabuleiro[0][j]=3;  
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
