/**
 * @file printSudoku.c
 * @author Shreyasi Chaudhuri (shreyasi.chaudhuri2059@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "sudoku.h"

int printSudoku(int arr[9][9])
{
     for (int i = 0; i < 9; i++)
      {
         for (int j = 0; j < 9; j++)
         {
             printf("%d  ",arr[i][j]); 
         }            
        printf("\n");
       }

       return 0;
}
