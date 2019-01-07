#include <stdlib.h>
#include <stdio.h>
#include "awesome2/awesome.h"
#include "awesome3/awesome.h"

// auskommentieren, um keine Debug-Info zu erhalten
#define DEBUG

int main(){
	
#ifdef DEBUG
	puts("starting");
#endif
 	something_awesome(42);
#ifdef DEBUG
	puts("done");
#endif
	return EXIT_SUCCESS;
}
