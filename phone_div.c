
#include <stdio.h>

int main(void) {
	char original[11];
	printf("Please input a 10-digit phone number:");
	scanf("%s", original);
	char converted[13];
	//DO NOT modify the code above

	//TODO: Partition the phone number stored in original array for better readability by 
	//using the character '-' as divider to break the number down into three components.
	//For instance, if the input is 5168886666 then the output is 516-888-6666
	//The input is stored in the array original (see lines 5 and 7). 
	//The output must be stored in the array converted (already declared in line 8).
	//You MUST use a loop to copy characters over
    char* ptr1= &original[0];
    char* ptr2= &converted[0];
    for (int i=0; i<11;i++){
        if (i==3 || i == 6){
            
            *ptr2 = '-';
            ptr2 ++;
            *ptr2=*ptr1;
        }
        *ptr2=*ptr1;
        ptr1 ++;
        ptr2 ++;
    }

 
	/**your code here**/

	//DO NOT modify the code below
       	printf("%s\n", converted);	
}