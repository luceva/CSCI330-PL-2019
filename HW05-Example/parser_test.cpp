/*    @file evaluator_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests the Parser class
*/

#include "gtest/gtest.h"

#include "Parser.h"
// Copy constructor
TEST(t1, 0){
  Parser a;
  EXPECT_EQ(a.evaluate(""), true);
}

TEST(t1, 1){
  Parser a;
  EXPECT_EQ(a.evaluate("01"), false);
}

TEST(t1, 2){
  Parser a;
  EXPECT_EQ(a.evaluate("0101"), true);
}

TEST(t1, 3){
  Parser a;
  EXPECT_EQ(a.evaluate("01011"), false);
}

TEST(t1, 4){
  Parser a;
  EXPECT_EQ(a.evaluate("01010101"), true);
}

TEST(t1, 5){
  Parser a;
  EXPECT_EQ(a.evaluate("01010111"), false);
}
