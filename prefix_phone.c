#include <stdio.h>

int main(void) {
	char original[8];
	printf("Please input a 7-digit phone number:");
	scanf("%s", original);
	char converted[13];
	//DO NOT modify the code above

	//TODO: Insert the area code (516) ahead of the phone number stored original array
	//For instance, if the input is 1234567 then the output is (516)1234567
	//The output must be stored in array converted (already declared in line 7)
	//You MUST use a loop to copy characters over

	/**your code here**/
    char* ptr1= &original[0];
    char* ptr2= &converted[0];
    for (int i=0; i<8;i++){
        if (i==0){
            *ptr2='(';
            ptr2++;
            *ptr2='5';
            ptr2 ++;
            *ptr2='1';
            ptr2 ++;
            *ptr2='6';
            ptr2++;
            *ptr2=')';
            ptr2++;
            continue;
        }
       
        
        *ptr2=*ptr1;
        ptr1 ++;
        ptr2 ++;
    }
	//DO NOT modify the code below
       	printf("%s\n", converted);	
}