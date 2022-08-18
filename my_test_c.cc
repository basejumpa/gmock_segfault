#include <gmock/gmock.h> 
#include <gtest/gtest.h>

using namespace testing;

class Mockup {
 public:
  MOCK_METHOD((void), setSomeInt, (int));
};

TEST(my_test_c, SomeTest) {
    Mockup mockup;
    EXPECT_CALL(mockup, setSomeInt(0));
}
