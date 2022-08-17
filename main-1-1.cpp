#include <iostream>
#include <string>
using namespace std;
extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
string array_one[3][2] = {{"Khang","Kan"},{"Alfred","Meiko"},{"Asta","Yuno"}};
string array_two[3][2];
string_2d_copy(array_one,array_two,3);

return 0;
}