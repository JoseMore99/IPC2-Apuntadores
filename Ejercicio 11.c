#include <stdio.h>


//Referenciacion

int main() {

    int v=18, w=21;

    const int *ptr=&v;

    ptr=&w;

    //*ptr=18;

    w=3;

    return 0;

}