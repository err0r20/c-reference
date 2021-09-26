#include <stdio.h>

int main()
{
    /* Enum is a user data type in C; mainly used to assign names to integral constants */
    
    enum rgbColor { red, blue, green };
    
    enum rgbColor color1 = red;
    
    enum rgbColor color2 = green;
    
    enum rgbColor color3 = blue;
    
    /* The order below will be: 0, 2, 1. This is out of order because in the rgbColor enum, green is last and should have been color3, but it is color2 */
    
    printf("%d\n", color1);
    
    printf("%d\n", color2);
    
    printf("%d\n", color3);

    return 0;
}
