#include <iostream>

using namespace std;
void count_digits(int array[4][4]);
int main(int argc, char *argv[])
{ 
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    
    count_digits(array);
    return 0;
}