/*
 * Main file for this kernel
 */

#include "tim_kernel.h"

#include <stdio.h>

	
	
int main(){

	keyboardMemory *keyLb;
	keyLb = (keyboardMemory*)malloc(getTotalKeyboardKeys()*sizeof(keyboardMemory)); // memory allocating for out keyboard Memory 
	setupKeys(keyLb);
	printkeyboardAddress(keyLb);

	free(keyLb); // solve memory leaking
	return 0;
	// clockid_t;
}
		
	
	
	
	
