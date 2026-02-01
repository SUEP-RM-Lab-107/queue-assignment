#include "../include/calculator.h"
#include <stdio.h>
#include <stdlib.h>

static int tests_passed = 0;
static int tests_failed = 0;

#define TEST_ASSERT_EQUAL(expected, actual, line) \
    do { \
        if ((expected) == (actual)) { \
            tests_passed++; \
            printf("  [PASS] %s:%d\n", __FILE__, line); \
        } else { \
            tests_failed++; \
            printf("  [FAIL] %s:%d: expected %d, got %d\n", __FILE__, line, (expected), (actual)); \
        } \
    } while(0)

/* 测试加法功能 */
void test_add_positive_numbers(void) {
    int result = add(5, 3);
    TEST_ASSERT_EQUAL(8, result, __LINE__);
}

void test_add_negative_numbers(void) {
    int result = add(-5, -3);
    TEST_ASSERT_EQUAL(-8, result, __LINE__);
}

void test_add_mixed_numbers(void) {
    int result = add(10, -4);
    TEST_ASSERT_EQUAL(6, result, __LINE__);
}

void test_add_zero(void) {
    int result = add(0, 5);
    TEST_ASSERT_EQUAL(5, result, __LINE__);
}

/* 测试减法功能 */
void test_subtract_positive_numbers(void) {
    int result = subtract(10, 4);
    TEST_ASSERT_EQUAL(6, result, __LINE__);
}

void test_subtract_negative_result(void) {
    int result = subtract(3, 8);
    TEST_ASSERT_EQUAL(-5, result, __LINE__);
}

/* 测试乘法功能 */
void test_multiply_positive_numbers(void) {
    int result = multiply(6, 7);
    TEST_ASSERT_EQUAL(42, result, __LINE__);
}

void test_multiply_by_zero(void) {
    int result = multiply(100, 0);
    TEST_ASSERT_EQUAL(0, result, __LINE__);
}

/* 测试除法功能 */
void test_divide_normal(void) {
    int result = divide(20, 4);
    TEST_ASSERT_EQUAL(5, result, __LINE__);
}

void test_divide_with_remainder(void) {
    int result = divide(10, 3);
    TEST_ASSERT_EQUAL(3, result, __LINE__);
}

void test_divide_by_zero(void) {
    int result = divide(10, 0);
    TEST_ASSERT_EQUAL(-1, result, __LINE__);
}

/* ==========================================
   Main Test Runner
   ========================================== */

int main(void) {
    printf("========================================\n");
    printf("   Calculator Unit Tests\n");
    printf("========================================\n\n");

    /* 运行所有测试 */
    test_add_positive_numbers();
    test_add_negative_numbers();
    test_add_mixed_numbers();
    test_add_zero();
    test_subtract_positive_numbers();
    test_subtract_negative_result();
    test_multiply_positive_numbers();
    test_multiply_by_zero();
    test_divide_normal();
    test_divide_with_remainder();
    test_divide_by_zero();

    /* 打印测试结果汇总 */
    printf("\n========================================\n");
    printf("   Results: %d passed, %d failed\n", tests_passed, tests_failed);
    printf("========================================\n");

    return tests_failed > 0 ? 1 : 0;
}
