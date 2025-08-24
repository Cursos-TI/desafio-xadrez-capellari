#include <stdio.h>


//metodo recursivo que move a torre
void moverTorre(int movimentos){
    if(movimentos > 0){
      printf("Torre andou para direita \n");
      moverTorre(movimentos -1);
    }
}

//metodo recursivo que move a Rainha
void moverRainha(int movimentos){
 if(movimentos > 0){
      printf("Rainha andou para esquerda \n");
      moverRainha(movimentos -1);
    }
}


int main(){
    moverTorre(5);
    moverRainha(8);

    //loop que move o cavalo
    for(int i =0; i<1; i++) {
       for(int j=0; j<2; j++) {
        printf("Cavalo andou para cima \n");
       }
        printf("Cavalo andou para direita \n");
    }

    //loop que move o bispo
    for(int i =0; i<2; i++) {
        printf("Bispo andou para cima \n");
        for(int j=0; j<1; j++) {
        printf("Bispo andou para direita \n");
       }
    }

    return 0;
}
