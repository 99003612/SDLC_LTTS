#include "unity.h"
#include "loan_amount.h"
#include "test_Loan_Amount.h"

void test_Loan_Amount_basic(void)
{
	TEST_ASSERT_EQUAL( 50000, 51000);
}

int test_Loan_Amount(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_Loan_Amount_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
