/*
 * The code below contains some errors.
 *
 * Debug the code to get it to run.
 * 
 * Question: what types of errors have been made? logical, runtime or syntax?
*/

#include <stdio.h>

// this function takes a double n and returns n multiplied by itself 
double my_function(double n){
  return n *= n;
}

int main(void) {
	// semi colon
  double value = 42;
  double processed_value = my_function(value);

	// changing string formatting to %f from %d
  printf("The initial value was %f", value); 
  printf(" and the processed value is %f\n", processed_value);
  return 0;
}


/*
 * errors found:
 * 	plenty of synax errors, missing semicolons
 *	also logic error, function that takes a double as argument but returns integer
 *	further logic errors switching between int and double types - corrected to double throughout
 *	missing preprocessor directive to use stdio library
*/