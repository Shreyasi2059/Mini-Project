/**
 * @file sudoku.h
 * @author Shreyasi Chaudhuri (shreyasi.chaudhuri2059@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __SUDOKU_H__
#define __SUDOKU_H__
/**
 * @brief Function to print Sudoku
 * 
 * @param arr Sudoku Grid Passed
 
 */
int printSudoku(int arr[9][9]);
/**
 * @brief Function to check if input value is valid
 * and move to next column and rows.
 * 
 * @param arr Sudoku grid
 * @param row row of sudoku
 * @param col column of sudoku
 * @param num number to be checked and added
  
 */
int safeSudoku(int arr[9][9], int row, int col, int num);
/**
 * @brief Function to solve Sudoku
 * 
 * @param arr Sudoku grid
 * @param row Row of sudoku
 * @param col Column of sudoku
 
 */
int solveSudoku(int arr[9][9],int row, int col);


#endif
