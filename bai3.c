#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <limits.h>

int main() {
    char datatype[20];
    printf("Enter the data type name (or all\" to display all): ");
    scanf("%s", datatype );

 if(strcmp(datatype, "char") == 0) {
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Value range of char: %d to %d", CHAR_MIN,CHAR_MAX);
   }

 else if (strcmp(datatype, "int") == 0) {
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Value range of int: %d to %d", INT_MIN, INT_MAX);
   }

else if(strcmp(datatype, "float") == 0){
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Value range of float: %e to %e", FLT_MIN, FLT_MAX);
}

else if(strcmp(datatype, "double") == 0){
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Value range of double: %e to %e", DBL_MIN, DBL_MAX);
}

else {
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Value range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Value range of float: %e to %e\n", FLT_MIN, FLT_MAX);
     printf("Size of double: %d bytes\n", sizeof(double));
    printf("Value range of double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Value range of char: %d to %d\n", CHAR_MIN,CHAR_MAX);
}
   return 0;
 }
 