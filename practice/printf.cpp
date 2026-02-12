#include <stdio.h>
#include<string.h>

int main() {
    char output[200];  // Array to hold the string
    int index = 0;     // Keep track of the current position in the array

    // Loop through increasing ranges of letters
    for (char start = 'a'; start <= 'h'; start++) {
    	printf("\n");
        for (char end = start; end <= 'l'; end++) {
        	printf("\n");
            for (char ch = start; ch <= end; ch++) {
            	printf("\n");
                output[index++] = ch;
                printf("%s\n", output);
            }
        }
    }

    // Add "hello world" at the end
    for (int i = 0; i < 11; i++) {
        output[index++] = "hello world"[i];
        
    }

    output[index] = '\0';  // Add null terminator to mark the end of the string

    printf("%s\n", output);  // Print the final string

    return 0;
}
