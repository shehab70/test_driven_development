#ifndef SIMPLE_TEST_H
#define SIMPLE_TEST_H
int add (int a ,int b);
int sub(int a,int b);
int mul (int a,int b);
 typedef int  (*ptr_fun_t)(int a ,int b);
 int operation(ptr_fun_t p,int a,int b);

#endif // SIMPLE_TEST_H
