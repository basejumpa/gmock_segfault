#include <gmock/gmock.h> 
#include <gtest/gtest.h>

using namespace testing;

class Mockup {
 public:
  virtual ~Mockup() = default;
  MOCK_METHOD((void), setSomeInt, (int));
};

TEST(my_test_b, SomeTest) {
    Mockup mockup; 
    EXPECT_CALL(mockup, setSomeInt(0));
    mockup.setSomeInt(0);
}
