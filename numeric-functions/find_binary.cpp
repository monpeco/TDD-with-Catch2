/*
1)	Given a list of binary codes and a binary file return, for every code, 
a list of index indicating which position is that code located at, into the 
file.

int** find(int codes_size, char** codes, char* file){
	// complete
}

Ej: 2, [“001001”, “111”], “1001001001110111“ => [[1, 4][9, 13]]
*/

#define CATCH_CONFIG_MAIN

#include "catch.hpp"

int** find(int codes_size, char** codes, char* file);

/* int, char**, char* -> int**
*  Given a list of binary codes, inspects a binary file and Return the index 
*  indicating the position where is a coincidence
*/
int** find(int codes_size, char** codes, char* file){

	return nullptr;
}