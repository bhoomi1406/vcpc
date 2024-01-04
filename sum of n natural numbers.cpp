#include <stdio.h>  
#include <conio.h>  
int sum_natural_no(int num);
int main()  
{  
    int num, sum = 0;
    printf("Enter any positive number to calculate the sum of natural no. ");  
    scanf("%d", &num);
      
    sum = sum_natural_no(num);
      
    printf("Sum of the first %d natural number is: %d", num, sum);
    return 0;  
}  
int sum_natural_no(int num)  
{  
    if( num == 0)
    {  
        return num;   
    }  
    else  
    {   
        return( num + sum_natural_no( num - 1));  
    }  
}  
