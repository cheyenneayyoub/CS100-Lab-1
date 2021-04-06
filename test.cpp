#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world\n", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("\n", echo(1,test_val));
}

TEST(EchoTest, Number){
	char* test_val[2]; test_val[1] = "5"; test_val[0] = "./c-echo";
	EXPECT_EQ("5\n", echo(2,test_val));
}

TEST(EchoTest, LongSentence){
	char* test_val[7]; test_val[0] = "./c-echo"; test_val[1] = "This"; test_val[2] = "is"; test_val[3] = "a"; test_val[4] = "long"; test_val[5] = "test"; test_val[6] = ".";
	EXPECT_EQ("This is a long test .\n", echo(7,test_val));
}

TEST(EchoTest, UCREmail){
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "cayyo001@ucr.edu";
	EXPECT_EQ("cayyo001@ucr.edu\n", echo(2,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
