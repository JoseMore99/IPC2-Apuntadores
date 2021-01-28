#include<stdio.h>


void init_ptr(){
    int local=57;
    ptr_int = &local;
    var = *ptr_int;
    *ptr_int = 23;
}

int main() {
    init_ptr();
    var = *ptr_int;
    *ptr_int = 20;//incorrecto
    
    return 0;
}


