#include <stdio.h>

void printRoman(int number)
{
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char* sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;    
    while(number>0)
    {
      int div = number/num[i];
      number = number%num[i];
      while(div--)
      {
        printf("%s", sym[i]);
      }
      i--;
    }
}
 
//Driver program
int main()
{
    int number = 3549;
 
    printRoman(number);
 
    return 0;
}