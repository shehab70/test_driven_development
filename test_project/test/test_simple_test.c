#ifdef TEST

#include "unity.h"

#include "simple_test.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_simple_test_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement simple_test");
}

void test_simple_test_mul(void){
    int result=0;
    result =operation(mul,5,6);
    TEST_ASSERT_EQUAL(31,result);
}

#endif // TEST
