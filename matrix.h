#pragma once

#define COLUMNSBIG 15
#define ROWSBIG 3
#define COLUMNSSMALL 3
#define ROWSSMALL 3
#define SIZE 4

void count(char **bigMat, char **smallMat, char *tavMax, int *countMax);
void inputMatrix(char **mat, int rows, int cols);
void printMatrix(char **matrix, int rows, int cols);
void printMatrixInt(int **matrix, int rows, int cols);
char *makestring (char **charMatrix);
//char *MakeString();
void swap1(char **str1_ptr, char **str2_ptr);


