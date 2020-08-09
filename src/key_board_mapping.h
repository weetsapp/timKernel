#pragma once

#include <stdlib.h>

// Our functions
void setupKeys();

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


struct keyboardMemory{
	char key;
};

typedef struct keyboardMemory keyboardMemory;