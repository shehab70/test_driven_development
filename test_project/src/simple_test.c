#include "simple_test.h"
#include <stdio.h>
#include<math.h>
// 

// void main(void){
//     int result =0;
//     result =operation(mul,5,6);
//     printf("%d",result);

// }

int operation(ptr_fun_t p,int a,int b){
    return (*p)(a,b);
}

int add (int a ,int b){
    return a+b;
}
int sub(int a,int b){
    return abs(a-b);
}
int mul (int a,int b){
    return a*b;
}
