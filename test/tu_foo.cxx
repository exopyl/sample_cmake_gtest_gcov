#include <gtest/gtest.h>

#include "../src/foo.h"

TEST(TEST_foo, foo)
{
    int res = foo(2, 3);
    EXPECT_TRUE(res == 5);
}
