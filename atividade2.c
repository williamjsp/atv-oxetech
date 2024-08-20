#include <stdio.h>
#include <locale.h>



int main(){
    setlocale (LC_ALL, "Portuguese");
    int contador;
    int minhas_aulas[7][2];
    int posColuna;
    int aulas;
    for(contador = 1; contador <=7; contador++){
        
        for(posColuna = 0; posColuna <= 1;posColuna++){
            minhas_aulas[contador][0] = contador;
        if(contador == 1){
            aulas = 0;
            minhas_aulas[contador][posColuna] = aulas;
        }else if(contador == 2){
            aulas = 5;
            minhas_aulas[contador][posColuna] = aulas;
        }else if(contador == 3){
            aulas = 4;
            minhas_aulas[contador][posColuna] = aulas;
        }else if(contador == 4){
            aulas = 2;
            minhas_aulas[contador][posColuna] = aulas;
        }else if(contador == 5){
            aulas = 3;
            minhas_aulas[contador][posColuna] = aulas;
        }else if(contador == 6){
            aulas = 1;
            minhas_aulas[contador][posColuna] = aulas;
        }else if(contador == 7){
            aulas = 0;
            minhas_aulas[contador][posColuna] = aulas;
        }
        
    } 
}
     for(contador = 1; contador <=7; contador++){
        for(posColuna = 0; posColuna <= 1;posColuna++){
            printf("%d", minhas_aulas[contador][posColuna]);
        }
     }
}
