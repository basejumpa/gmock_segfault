
This example reproduces `EXPECT_CALL` from google mocks library causing a segmentation fault when the expectation is not met.

## Actual behavior
Test `my_test_b.SomeTest` fails. Reason: SEGFAULT.

## Expected behavior
Test `my_test_b.SomeTest` fails. Reason: Expectation is not met.

