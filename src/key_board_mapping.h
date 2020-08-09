#pragma once

#include <stdlib.h>

struct keyboardMemory{
	char key;
};

typedef struct keyboardMemory keyboardMemory;

// Our functions
void setupKeys(keyboardMemory*); // function to setup keyboard addresses
void printkeyboardAddress(keyboardMemory*);
int getTotalKeyboardKeys(); // idk if we actaully have to calculte this or not just for sake of ego :P

// Our memory address
static int keyboardKeys[] = {
		10001, 00001, 10001, 10010, 11001, 
		101010, 10010, 0.01001, 1000, 10001
};

static int usbPortKey1[] = {
    10001, 00001, 10001, 10010, 11001, 101010, 10010, 0.01001, 1000, 10001 
};

static int usbPortKey2[] = {
    10001, 00001, 10001, 10010, 11001, 101010, 10010, 0.01001, 1000, 10001 
};

static int bluetoothKeys[] = {
    10001, 00001, 10001, 10010, 11001, 101010, 10010, 0.01001, 1000, 10001 

};

// global variables
static int total_no_of_Key = 126; // default keyboard key counts
static int charMemSize = sizeof(char); // in my machine is 1 byte can be used to point towords next memory address