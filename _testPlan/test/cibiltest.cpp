#include "unity.h"
#include "cibil.h"
#include "test_cibil.h"

void test_cibil_basic(void)
{
	TEST_ASSERT_EQUAL( 433, 433);
}

int test_cibil(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_cibil_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
