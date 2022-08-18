#include <gmock/gmock.h> 
#include <gtest/gtest.h>

using namespace testing;

class Mockup {
 public:
  MOCK_METHOD((void), setSomeInt, (int));
};

Mockup mockup;

TEST(my_test_f, SomeTest) {
    EXPECT_CALL(mockup, setSomeInt(0));
}
