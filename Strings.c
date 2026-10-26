#include <stdio.h>
int main(){ 
int contador,turma;
    printf ("Qual é o número de alunos ?\n");
    scanf ("%d",turma);

int var[turma];
contador=0;

    while(contador!=turma)
  
        { 
            var[contador]=contador+1;
                printf("var[%d",contador);
            printf("]=%d",var[contador]);
         }


}       
