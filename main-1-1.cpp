#include <iostream>

using namespace std;
extern int sum_diagonal(int array[4][4]);
int main(int argc, char *argv[])
{ 
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    
    // code to find how many elements
    cout << "The sum of the diagonal is: " << sum_diagonal(array) << endl;
    return 0;
}