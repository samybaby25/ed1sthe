/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: sthefane.almeida
 *
 * Created on 4 de Abril de 2023, 18:34
 */

#include <stdio.h>
#include <stdlib.h>

void imprime(int l, int c, int** mat)
{
    int i, j;
    for(i = 0; i < l; i++)
    {
        printf("\n");
        for(j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
    }
   
}


/*
int** transposta(int l, int c, int** mat)
{
    int i, j, transp[2][3];
    
   
   
   for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
            transp[i][j] = mat[j][i]; 
   }
   return transp[i][j];
} */

int main(int argc, char** argv) {
    
    int m, n;

    int i, j;
    
    printf("digite o numero de linhas \n");
    scanf("%d", &m);
    printf("digite o numero de colunas\n");
    scanf("%d", &n);
    int** mat = (int**) malloc(m * sizeof(int*));/*quero alocar espaço para m ponteiros para inteiros*/
    for(i = 0; i < m; i++) /*m são as linhas*/
    {
        mat[i] = malloc(n * sizeof(int));/*aqui eu quero alocar espaço para n vezes de inteiros*/
    }/*alocando memória*/
    
    printf("Preencha a matriz: \n");
    for(i = 0; i < m;  i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    }
    imprime(m, n, mat);
    
    
    /*
    printf("Preencha a matriz: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
            scanf("%d", &mat[i][j]);
    }
    
    printf("\nMatriz: ");
    for(i = 0; i < 3; i++)
        
    {
        printf("\n");
        for(j = 0; j < 2; j++)
            printf("%d ", mat[i][j]);
    }
    */
    
 
    return (EXIT_SUCCESS);
}

