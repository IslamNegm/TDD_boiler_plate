#include "unity.h"
// Including the production code module interface file
#include "example.h"

// Includes of tests
#include <string.h>

void test_null__should_hi_only(void)
{
	// Given 
	char name[] = "";
	char expected_statement[] = "Hi, ";
	char actual_statement[30] = "";
	// When 
	say_hi(actual_statement, name);
	// Then
	TEST_ASSERT_EQUAL_STRING(actual_statement, expected_statement);
}

void test_islam__should_hi_islam(void)
{
	// Given 
	char name[] = "Islam";
	char expected_statement[] = "Hi, Islam";
	char actual_statement[30] = "";
	// When 
	say_hi(actual_statement, name);
	// Then
	TEST_ASSERT_EQUAL_STRING(actual_statement, expected_statement);
}


int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_null__should_hi_only);
RUN_TEST(test_islam__should_hi_islam);
return UNITY_END();
}