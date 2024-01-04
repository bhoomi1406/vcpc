#include <stdio.h>  
  
int main() {  
    int num = 500;  
    int *ptr;
    ptr = &num;  
    printf("add of ptr: %d\n", ptr);   
    ptr = ptr+7;  
    printf("After adding add of ptr is: %d\n", ptr);  
    return 0;  
}  
