#include <gmock/gmock.h> 
#include <gtest/gtest.h>

using namespace testing;

class Mockup {
 public:
  MOCK_METHOD((void), setSomeInt, (int));
};



TEST(test_expectation_not_met__not_leaked, SomeTest) {
    Mockup mockup;
    EXPECT_CALL(mockup, setSomeInt(0)).Times(2);
    mockup.setSomeInt(0);
}
