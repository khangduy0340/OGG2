#include <iostream>
using namespace std;
extern int tax_bracket_lookup(int income);

int main(){
cout << tax_bracket_lookup(10000) << endl;
cout << tax_bracket_lookup(30000) << endl;
cout << tax_bracket_lookup(120000) << endl;
return 0;
}