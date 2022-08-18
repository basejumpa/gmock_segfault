#include <gmock/gmock.h> 
#include <gtest/gtest.h>

using namespace testing;

class Mockup {
 public:
  virtual ~Mockup() = default;
  MOCK_METHOD((void), setSomeInt, (int));
};

Mockup mockup;

TEST(my_test_a, SomeTest) {
    EXPECT_EQ(1, 1);
}
