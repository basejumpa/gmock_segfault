Only on windows a leaked mock object causes a segmentation fault in the test executable.

Expected behavior:

Like on linux, no segfault and additional ERROR message on console about leaked mock object.



| Test                                 | Expected behavior | On linux: Actual behavior | On windows: Actual behavior |
|--------------------------------------|-------------------|---------------------------|-----------------------------|
| test_expectation_met__leaked         | Passed            | Passed                    | Passed                      |
| test_expectation_met__not_leaked     | Passed            | Passed                    | Passed                      |
| test_expectation_not_met__leaked     | Failed            | Failed                    | SEGFAULT                    |
| test_expectation_not_met__not_leaked | Failed            | Failed                    | Failed                      |
