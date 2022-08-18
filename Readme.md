
This example reproduces `EXPECT_CALL` from google mocks library causing a segmentation fault when the expectation is not met.

## Actual behavior
Test `my_test_c.SomeTest` fails. Reason: SEGFAULT.

## Expected behavior
Test `my_test_c.SomeTest` fails. Reason: Expectation is not met.


## Overview over examples

| Example | Expectation           | Mock object is | SEGFAULT on Linux? | SEGFAULT on Windows? |
|---------|-----------------------|----------------|--------------------|----------------------|
| a       | No expectation stated | local          | no                 | no                   |
| b       | Expectation met       | local          | no                 | no                   |
| c       | Expectation not met   | local          | no                 | no                   |
| d       | No expectation stated | global         | no                 | no                   |
| e       | Expectation met       | global         | no                 | yes                  |
| f       | Expectation not met   | global         | no                 | yes                  |
|         |                       |                |                    |                      |