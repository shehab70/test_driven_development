#include "src/simple_test.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_simple_test_NeedToImplement(void)

{

    UnityIgnore( (("Need to Implement simple_test")), (UNITY_UINT)(17));

}



void test_simple_test_mul(void){

    int result=0;

    result =operation(mul,5,6);

    UnityAssertEqualNumber((UNITY_INT)((31)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

}
