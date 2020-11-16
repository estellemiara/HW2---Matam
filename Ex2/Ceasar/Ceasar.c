/////////////////////////////////////////////////////////////////////////
/////////////////////////////// Ceasar.c ////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: This file contain all the function bodies. All this functions are
//      helping to build the Cease process, and olso create the threads.

//............................Includes.................................//
//.....................................................................//
#include "Ceasar.h"
#include "hard_coded_data.h"

//...........................Functions.................................//
//.....................................................................//
/*
* Function:        exit_prog
* description:     this function close the program, close the file and free memory
* input:           input file, output file, forest srtruct
* output:          none
*/
void exit_prog(Files* files) {
	/* Close files*/
	fclose(files->input);
	fclose(files->output);

}
