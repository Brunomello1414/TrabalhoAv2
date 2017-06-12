#include<stdio.h>
int main()
{ 
int matriza[4][4];
int matrizb[4][4];
int h,t,tam=4;
  printf("\n Olá meu nome é Bruno Mello e minha matrícula na Unilasalle é 0050014760\n");
  
  for(h=0; h<=3; h++)
  {
  for(t=0;t<=3;t++)
  {
    printf("Matriz A - Entre com a linha%d, coluna%d:",h+1,t+1);
    scanf("%d",&matriza[h][t]);
    
  }
    printf("\n");
  }
    printf("\n...\n\n");
  
  for(h=0; h<=3; h++)
  { 
  for(t=0; t<=3; t++)
  {
    printf("Matriz B - Entre com a linha%d, coluna%d:",h+1,t+1);
    scanf("%d", &matrizb[h][t]);
    }
    printf("\n");
 
  }
  printf("...\n");
  
  printf("\n Seguem os resultados:\n");
  printf("\n Soma das duas Matrizes:\n");
  
  for(h=0;h<=3;h++)
  {
    for(t=0;t<=3;t++)
    {
    printf("%d\t",matriza[h][t] + matrizb[h][t]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Diagonal Secundária da Matriz A\n");
  
  for(h=0;h<=3;h++)
  {
    for(t=0;t<=3;t++)
    {
    if(t==tam-1-h)
      printf("%d\t", matriza[h][t]);
      
    else
      printf("0\t");
    }
      printf("\n");
  }
  printf("\n Multiplicação das duas matrizes\n");
  
  for(h=0;h<=3;h++)
  {
    for(t=0;t<=3;t++)
    {
      printf("%d\t", matriza[h][t] * matrizb[h][t]);
     
    }
    printf("\n");
  }
    printf("\n...\n");
  
  

  printf("\n A minha maior dificuldade foi identificar quantas variáveis eu teria que usar\n");
  return 0;
         
}