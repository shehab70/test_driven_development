#include <stdio.h>
#include<math.h>
// 
int add (int a ,int b);
int sub(int a,int b);
int mul (int a,int b);
 typedef int  (*ptr_fun_t)(int a ,int b);
 int operation(ptr_fun_t p,int a,int b);
void main(void){
    int result =0;
    result =operation(mul,5,6);
    printf("%d",result);

}

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
