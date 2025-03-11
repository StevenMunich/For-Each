#include <iostream>
#include <string>
#include <vector>
using namespace std;

//The purpouse of ForEach in Java & Javascript is to call a function on a collection or array.
//The function is called for each element
//this is how streams in Java Filter elements.

//In this example we use a pointer to an array for simplicity. You can pass an array that works too.
//Previous example used Vectors and Auto, this example does not.


void ForEach(int* values, int size, void(*func)(int)){ 	
	//the first pointer is the begining of array
	//the second pointer is a void pointer with 1 argument of type int	
	for(int value =0; value < size; value++){
		
		func(values[value]); //call function with value
	}	
	
}//end ForEach


//2 functions that print NOTE: BOTH FUNCTIONS HAVE 1 PARAMETER OF TYPE INT
void printValues(int value){
	cout << value << endl;
}
void lambda(int a){
	cout << a << endl;
}

void doubleALL(int a){
	a = a * 2;
	cout << "Double but pass byValue "<< a << " \n";
		
}

//-------------------can not be used------------
void NoArgtype(){ //missing argument of type int
	cout << "1" << endl;
}
//--END SETUP


int main(){
	
	//Initialize and populate array
	int size = 5;
	int numbers[size];
	for(int i=0; i < size; i++)
		numbers[i] = i * 3;
				
		
	cout << "calling forEach\n";
	ForEach(numbers, size, lambda); //lambda function is passed as an argument.
	
	//numbers->pop_back();
	cout << "Back Removed: calling forEach\n";
	ForEach(numbers, size, printValues); //printValues is called for each element.
	
	//Can use a pointer because the start of array is a pointer
	int *p1 = &numbers[0];	
	cout << "using pointer: \n";
	ForEach(p1, size, printValues); 
		
	cout << "Double: \n";
	ForEach(p1, size, doubleALL);
	ForEach(p1, size, printValues); 
	//NoArgtype does not work because it lacks int argument
	//ForEach(p1, size, NoArgtype);
	return 0;
}
