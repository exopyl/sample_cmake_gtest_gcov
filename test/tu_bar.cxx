#include <gtest/gtest.h>

#include "../src/bar.h"

TEST(TEST_bar, bar)
{
    int res = bar(2, 3);
    EXPECT_TRUE(res == 6);
}
