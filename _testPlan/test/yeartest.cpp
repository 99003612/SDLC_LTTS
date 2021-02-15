#include "unity.h"
#include "years.h"
#include "test_no_of_years.h"

void test_no_of_years_basic(void)
{
	TEST_ASSERT_EQUAL( 1, 51000);
}

int test_no_of_years(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_no_of_years_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
