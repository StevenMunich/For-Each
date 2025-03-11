#include <stdio.h>

int main() {


int a = 10;
char b = 'x';
void* p = &a; // void pointer holding address of int


printf("%p has a value of %d\n", p, *(int*)p); // typecasting to int* before dereferencing

p = &b; // void pointer holding a ddress of char

printf("%p has a value of %c\n", p, *(char*)p);


}

//Dereferencing a void pointer directly is not 
//allowed because the compiler does not know the type of data it points to. 
//To dereference a void pointer, it must be typecast to the appropriate type
