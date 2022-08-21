#include <gtest/gtest.h>
#include "file.h"

class Mytest:public ::testing::Test
{
protected:
    Mytest(){}
    ~Mytest(){}

    void SetUp() {}
    void TearDown() {}
};

TEST_F(Mytest, ouputTag) {
    File f;
    int num = f.Get();
    EXPECT_EQ(num,2);
}