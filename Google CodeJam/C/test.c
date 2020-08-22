#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Perform an in-place "rotation" of the characters in ioStr
  
// Where "rotation" means shift the characters left or right and those which drop
// off the end of the string are added to the vacated character positions at the other end
// n: the number of places to rotate
// direction: 0 = rotate left, 1 = rotate right
// e.g. RotateString( "ABCDE", 1, 1 ) -> "EABCD"
// e.g. RotateString( "ABCDE", 2, 1 ) -> "DEABC"
// e.g. RotateString( "ABCDE", 4, 0 ) -> "EABCD"
void RotateString( char * ioStr, int n, int direction )
{
    // Your code here
    
    int strLength = strlen(ioStr);

        for(int j = 0; j < n; j++){
            
            if(direction == 1){
                ioStr[j] = ioStr[j+1];
                ioStr[strLength] = '\0';
            }
            
            if(direction == 0){
                //right
                ioStr[j] = ioStr[j-1];
                ioStr[strLength] = '\0';
            }
        }

/*
for(int i = 0; i < strLength; i++){

ioStr[strLength] = ioStr[0];
}
*/
   
}

int main (int argc, char * const argv[]) 
{
    char * str = strdup("Hello World");
    
    printf( " Initial: %s\n", str );
    RotateString( str, 1, 1 );
    printf( " Rotated: %s\n", str );
 
    free( str );
 
    return 0;
}