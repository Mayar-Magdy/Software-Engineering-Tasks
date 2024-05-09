#include <stdio.h>
#include <stdlib.h>

int main() {

/*
    //one-input and output an array using 2 for loops.
    int n;
    printf("Enter The size u want :");
    scanf(" %d", &n);
    printf("Enter The numbers :");
    int arr[n];
    for(int i=0; i<n;++i) scanf(" %d",&arr[i]);
    for(int i=0; i<n;++i) printf("%d ",arr[i]);
*/


    /*
     //two-Calculate Average Using Arrays.
     int n ;
      printf("what is the number of numbers you want to calculate their AVG :");
      scanf(" %d", &n);
      printf("Enter The numbers :");
      int arr[n];
      for(int i=0; i<n;++i) scanf(" %d",&arr[i]);
      int sum=0;
      for(int i=0; i<n;++i) sum+=arr[i];
      printf("%d ",sum/n);*/
/*

 //three-Find Largest Element in an Array.
    int n ;
    printf("Enter the size:");
    scanf(" %d", &n);
    printf("Enter The numbers :");
    int arr[n];
    for(int i=0; i<n;++i) scanf(" %d",&arr[i]); // 2 3 1 5 7
    // method1
    int mx=arr[0];
    for(int i=1; i<n;++i){
        if(arr[i]>mx) mx=arr[i];
    }
    printf("%d" ,mx);
    // method2
//int temp;
//    for(int i=0; i<n;++i) {
//        for (int j = i + 1; j < n; ++j) {
//            if (arr[j] > arr[0]) {
//                temp= arr[j];
//                arr[j]=arr[i];
//                arr[i]=temp;
//            }
//        }
//    }
//    printf("%d" ,arr[0]);
*/

/*    //four-store temperature of two cities of a week and display it using 2D Array.
    int tem[2][7];
    for (int i = 0; i < 2; ++i) {
        printf("Enter The City %d temperature :", i + 1);
        for (int j = 0; j < 7; ++j) {
            scanf(" %d", &tem[i][j]);
        }
    }
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 7; ++j) {
            printf("temperature of the day %d to the city number %d is %d C\n", j + 1, i + 1, tem[i][j]);
        }
//    //just visualization
//    printf(" ");
//    for (int i = 0; i < 7; ++i) printf(" %d", i);
//    printf("\n");
//    //2d
//    for (int i = 0; i < 2; ++i){
//        printf("%d ", i);
//    for (int j = 0; j < 7; ++j) {
//        printf("%d ", tem[i][j]);
//    }
//        printf("\n");
//
//    }*/
    /*
     //five-read a matrix and find sum using 2D array(one 2 D array and find sum for all elements)
       int rows, cols;
       printf("Enter  number of rows and cols :");
       scanf(" %d%d", &rows, &cols);
       int TwoD[rows][cols];
       printf("Enter Your numbers :");
       int sum = 0;
       for (int i = 0; i < rows; ++i)
           for (int j = 0; j < cols; ++j) {
               scanf(" %d", &TwoD[i][j]);
               sum += TwoD[i][j];
           }
         printf("Sum is %d", sum);;*/
/*   //six-read 2 matrix and find sum 2 D array (matrix 2D + matrix 2D)
   int rows, cols;
    printf("Enter number of rows and cols for two matrix:");
    scanf(" %d%d", &rows, &cols);
    int matrix1[rows][cols] , matrix2[rows][cols] ;
    printf("Now Entering Matrix one numbers\n");
    for (int i = 0; i < rows; ++i) {
    printf("Enter row number %d: ", i + 1);
        for (int j = 0; j < cols; ++j) {
            scanf(" %d", &matrix1[i][j]);
        }
        printf("\n");
    }
  int sum=0;
    printf("Enter Matrix two numbers\n");
    for (int i = 0; i < rows; ++i) {
        printf("Enter row number %d: ", i + 1);
        for (int j = 0; j < cols; ++j) {
            scanf(" %d", &matrix2[i][j]);
            sum += matrix2[i][j] + matrix1[i][j];
        }
        printf("\n");

    }
    printf("Sum of Two Matrix = \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {

            printf("%d ",matrix2[i][j] + matrix1[i][j]);
        }
        printf("\n");

    }

    printf("Sum is %d", sum);*/

/*    //seven-read 2 matrix and find multiply 2 D array(matrix 2D * matrix 2D)
    int rows, cols, mul = 0;
    printf("Enter number of rows and cols for two matrix :");
    scanf(" %d%d", &rows, &cols);
    int matrix1[rows][cols], matrix2[rows][cols];
    printf("Enter Matrix one numbers :");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            scanf(" %d", &matrix1[i][j]);

    printf("Enter Matrix two numbers :");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            scanf(" %d", &matrix2[i][j]);

    printf("Mul of Two Matrix = \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix2[i][j] * matrix1[i][j]);
            mul += matrix2[i][j] * matrix1[i][j];
        }
        printf("\n");
    }

    printf("All two matrix mul = %d ", mul);*/


    return 0;
}
