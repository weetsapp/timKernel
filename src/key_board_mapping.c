#include "key_board_mapping.h"

void setupKeys(keyboardMemory *keyLb){

    total_no_of_Key = 4; //  for now we are assuming that keyboard have toal 4 keys
    


    /*
     * keyLb + (charMemSize*index) pointing towords a memory address 
     */
    
    (keyLb+ (charMemSize*0) )->key = keyboardKeys[0]; // ky1
    (keyLb+ (charMemSize*1) )->key = keyboardKeys[1]; // ky2
    (keyLb+ (charMemSize*2) )->key = keyboardKeys[2]; // ky3
    (keyLb+ (charMemSize*3) )->key = keyboardKeys[8]; // ky4

	// char ky1 = keyboardKeys[0];
	// char ky2 = keyboardKeys[1];
	// char ky3 = keyboardKeys[3];
	// char ky4 = keyboardKeys[8];

    
	// keyLb.key = ky1;
    // for (int index = 0; index < total_no_of_Key; index++)
    // {
    //     printf("configuring keyboard USB: [OK] \n");	
	//     printf("USB keyboard Addr: %p \n", (keyLb + (charMemSize*index) )->key );
    // }
	
	char bt1 = bluetoothKeys[0];
	char bt2 = bluetoothKeys[1];
	char bt3 = bluetoothKeys[2];
	char bt4= bluetoothKeys[8];
	
}	

void printkeyboardAddress(keyboardMemory* keyLb)
{
    for (int index = 0; index < total_no_of_Key; index++)
    {
        printf("configuring keyboard USB: [OK] \n");	
	    printf("USB keyboard Addr: %p \n", (keyLb + (charMemSize*index) )->key );
    }
}

int getTotalKeyboardKeys()
{
    int total_no_of_Key = 4; //  for now we are assuming that keyboard have toal 4 keys
    return total_no_of_Key;
}