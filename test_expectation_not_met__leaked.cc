#include <gmock/gmock.h> 
#include <gtest/gtest.h>

using namespace testing;

class Mockup {
 public:
  MOCK_METHOD((void), setSomeInt, (int));
};

Mockup mockup;

TEST(test_expectation_not_met__leaked, SomeTest) {
    EXPECT_CALL(mockup, setSomeInt(0)).Times(2);
    mockup.setSomeInt(0);
}
