/////////////////////////////////////////////////////////////////////////
///////////////////////////////// main.c ////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: This main.c file of the Ceasar process is incharge of reading the
//      input file, dicript the ceasar code, and print in the output
//      file.


//............................Includes.................................//
//.....................................................................//
#include "Ceasar.h"

//...........................Functions.................................//
//.....................................................................//

/*
* Function:        main
* description:     the main function does the son process
* input:           number of arguments, array of argument
* output:          number of trees that was burn in process
*/
int main(int argc, char* argv[]) {
	Files* files;
	
	if (argc != ARGUMENTS) {
		printf("Error: invalid number of arguments(%d instead of %d)\n", (argc - 1), ARGUMENTS);
		exit(FAIL_PROCESS);
	}
	else {
		files = (Files*)malloc(sizeof(Files));
		ASSERT("malloc", files);
		
		files->input = fopen(argv[ARGUMENTS- 3], "r");
		files->input = fopen(argv[ARGUMENTS -1], "w");
		ASSERT("fopen", files);
		ASSERT("fopen", files);

		return EXIT_SUCCESS;
	}
}