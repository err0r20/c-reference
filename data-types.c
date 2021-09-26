/* Examples of common data types in C are: int, float, double, char, _Bool. */

#include <stdio.h>

int main(){
    
    int hex = 0x539; //stores integral values, or whole numbers. also hex
    
    float notation = 3.40282e+038; //stores floating-point numbers
    
    double longNumber = 1.79769e+308; //same as float, but roughly twice the precision
    
    _Bool x = 1, y = 0; //basically just true or false
    
    char name[11] = "Exspiravit"; //specifying that the data is 11 characters long
    
    printf("%d\n", hex);
    
    printf("\n%f\n", notation);
    
    printf("\n%lf\n", longNumber);
    
    if(x){ /* Same as if(x == 1) */
        
        printf("\nThis will print!\n");
        
    }
    if(!y){ /* Same as if(y == 0) */
        
        printf("\nThis will also print!\n");
        
    }
    
    printf("\n%s", name);
    
    return 0;
    
}
