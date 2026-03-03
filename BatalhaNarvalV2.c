#include <stdio.h>

int main(){

    int tabuleiro[10][10];
    printf("Batalha Narval\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
    for(int i =0; i<3; i++){ //Horizontal e vertical
        tabuleiro[0][i]=3;
        for(int j=6; j<28; j++){
            if(j== 7 || j== 17 ||j== 27){
              tabuleiro[0][j]=3;  
            }
            
        }
    }
    
    for(int i =10; i<33; i++){ //Diagonal
            if(i== 10 || i== 21 ||i== 32){
              tabuleiro[0][i]=3;  
            }
        for(int j=77; j<100; j++){
            if(j== 77 || j== 88 ||j== 99){
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
