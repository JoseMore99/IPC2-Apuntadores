#include<stdio.h>


int main() {
    int a = 10, b=25;
    int *const ptr=&a;
    *ptr = 3;
    ptr=&b;
    
    return 0;
}




