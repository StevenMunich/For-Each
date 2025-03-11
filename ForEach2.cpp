#include <iostream>
#include <string>
#include <vector>
using namespace std;

//The purpouse of ForEach in Java & Javascript is to call a function on a collection or array.
//The function is called for each element
//this is how streams in Java Filter elements.

//In this example we use a pointer to an array for simplicity. You can pass an array that works too.
//Previous example used Vectors and Auto, this example does not.


//---------------------------------------------------------------------------------------------
//---------------------------------====----DRAC00LA----------===-====----------------------------
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------

void ForEach(int* values, int size, void(*func)(int*)){ 	
	//the first pointer is the begining of array
	//the second pointer is a void pointer with 1 argument of type int	
	for(int value =0; value < size; value++){
		
		func(&values[value]); //call function with value
	}	
	
}//end ForEach

//2 functions that print NOTE: BOTH FUNCTIONS HAVE 1 PARAMETER OF TYPE INT
void doubleValues1(int *value){
	cout << *value << endl;
	*(value) *= 2;
}
void printValues1(int *value){
	cout << *value << endl;	
}

int main(){
	int size = 5;
	int numbers[size];
	for(int i=0; i < size; i++)
		numbers[i] = i * 3;
	
	// For Each
	cout << "calling forEach\n";			
	ForEach(numbers, size, printValues1);	
	cout << "calling forEach\n";
	ForEach(numbers, size, doubleValues1);
	cout << "calling forEach AFTER DOUBLE\n";			
	ForEach(numbers, size, printValues1);
}
//---------------------------------------------------------------------------------------------
//-----------------------------------------END OF DRACULA---------------------------------------
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------

//--REGULAR
