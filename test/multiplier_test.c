#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_positive_numbers(void) {
    TEST_ASSERT_EQUAL_INT(6, multiplier(2, 3));
}

void test_negative_and_positive(void) {
    TEST_ASSERT_EQUAL_INT(-20, multiplier(4, -5));
}

void test_two_negatives(void) {
    TEST_ASSERT_EQUAL_INT(21, multiplier(-3, -7));
}

void test_zero_multiplication(void) {
    TEST_ASSERT_EQUAL_INT(0, multiplier(0, 10));
    TEST_ASSERT_EQUAL_INT(0, multiplier(10, 0));
}

void test_zero_times_zero(void) {
    TEST_ASSERT_EQUAL_INT(0, multiplier(0, 0));
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_positive_numbers);
    RUN_TEST(test_negative_and_positive);
    RUN_TEST(test_two_negatives);
    RUN_TEST(test_zero_multiplication);
    RUN_TEST(test_zero_times_zero);

    return UNITY_END();
}