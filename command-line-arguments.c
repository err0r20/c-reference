#include <stdio.h>

/*
The below arguments within the main function are what handle the command line arguments.

argc is the number of arguments passed and argv is a pointer array which points to each
argument within the program.
*/

int main(int argc, char *argv[]){
    
    if(argc == 2 ){
        
        //prints back the argument given. note: the argv[1] points to the argument, not the program name
        
        printf("The argument supplied is %s\n", argv[1]);
        
    }else if(argc > 2){
        
        //prints error along with the command usage. the argv[0] is the program name
        
        fprintf(stderr, "Too many arguments! Usage: %s <argument>\n", argv[0]);
        
        return 1;
        
    }else{
        
        //see previous comment
        
        fprintf(stderr, "At least one argument is needed. Usage: %s <argument>\n", argv[0]);
        
        return 1;
        
    }
    
    return 0;

}
