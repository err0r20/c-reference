#include <stdio.h>
#include <stdlib.h>

int main()
{
float avgProfit;
int costofPumpkins = 10;
int numberofSales = 59;
int daysWorked = 7;
  
avgProfit = ((float)costofPumpkins * (float)numberofSales) / (float)daysWorked; //here we can convert ints to floats and floats to ints

printf("Average daily profit: $%.2f\n", avgProfit);

return 0;
}
