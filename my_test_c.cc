#include <gmock/gmock.h> 
#include <gtest/gtest.h>

using namespace testing;

class Mockup {
 public:
  virtual ~Mockup() = default;
  MOCK_METHOD((void), setSomeInt, (int));
};

Mockup mockup;

TEST(my_test_c, SomeTest) {
    EXPECT_CALL(mockup, setSomeInt(0));
}
