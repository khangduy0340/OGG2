#include <iostream>
#include <string>
using namespace std;

extern void print_binary_str(std::string decimal_number);
int main(int argc, char *argv[])
{
    string inputString = "35213123";
    print_binary_str(inputString);
    return 0;
}
