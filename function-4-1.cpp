#include <iostream>
#include <math.h>

using namespace std;
int sum_middle_row_column(int **vals, int num_rows, int num_cols){
    int place1 = ceil(num_cols/2); // place 1 = 3
    int place2 = ceil(num_rows/2); // place 2 = 2
    int sum1 = 0; //sum column
    int sum2 = 0; // sum row
    for(int i =0;i<num_rows;i++){
    sum1 += vals[i][place1];
    }
    for(int i =0;i<num_cols;i++){
    sum2 += vals[place2][i];
    }
    int sum = sum1+sum2;
    return sum;

}
