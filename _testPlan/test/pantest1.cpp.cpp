#include "unity.h"
#include "pan.h"
#include "test_pan.h"

void test_pan_basic(void)
{
    TEST_ASSERT_EQUAL(ASETF4564S,ASETF4564S);
}

int test_pan(void)
{
    /* Initiate the Unity Test Framework */x
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_pan_basic);

    /* Close the Unity Test Framework */
    return UNITY_END();
}

