#include <iostream>
using namespace std;

// In this program we are not copying the value or the member of the array, but we copy the address
// This make the change in the old or new array will affect the other
int main()
{
	int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10}; //Initialize member for array a
	int *b = new int[10]; // In heare we just simply create a dynamic allocated array

	/* address of a[0] is assigned to ptr */
	ptr = &a[0];   // ptr here only hold the address of a rather than its member

	// I want to copy the values in a into b; since i've declared b
    // as a dynamically allocated array,
	// I can now do pointer magic!!
	b = ptr; // so now b will also hold the address which make b become a storage of addresses

	cout << "Value of first element in b " << b[0] << endl; 
	cout << "Value of second element in b " << b[1] << endl; 

	a[1] = 42; // therefore the change in a will affect what b is pointing to -> also change the value in the new array
	cout << "Value of second element in b " << b[1] << endl;

	return 0;
}