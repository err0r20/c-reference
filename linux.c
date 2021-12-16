#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

        //here, the function system passes a specified command to the host
        //environment to be executed

        int v;

        v = system("ls -la");

        return v;

        //returns the output

}
