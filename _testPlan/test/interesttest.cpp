#include "unity.h"
#include "interest.h"
#include "test_interest.h"

void test_interest_basic(void)
{
	TEST_ASSERT_EQUAL( 2, 4250);
}

int test_interest(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_interest_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
