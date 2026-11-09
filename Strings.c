#include <stdio.h>
#include <stdlib.h>

int main(){ 

  
  int contador,turma;
   
  printf ("Qual é o número de alunos ?\n");
    scanf ("%d",&turma);
  
int var[turma];
contador=turma-1;

    while(contador==0)
  
        { 
            var[contador]=contador+1;
                printf("var[%d",contador);
            printf("]=%d\n",var[contador]);
          contador=contador-1;
          
         }


}       
