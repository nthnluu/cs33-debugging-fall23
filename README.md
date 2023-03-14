## Welcome to the Debugging Section

Take a look at the `strings.c` file! The function `strncmp` isn't doing what it claims to be doing. Check out the header comments for what it's supposed to do!

Feel free to rewrite anything in `strncmp`. Please do not modify the function signature. **There is one major bug in the function. Your task is to fix it such that it behaves according the header comments.**

We've provided a test suite. Once you have finished, you should see:
```
=================== Running strncmp Tests. ===================
strncmp: Passed 10 tests, Failed 0 tests | 100.000000%
```
In the function's current state, 3 of the 10 tests are failing. Note that these tests are certainly not exhaustive, so please make sure to write some of your own to ensure the funciton is working as expected.

**Please write up 2 explanations:**
1. If a student posted this on Ed, what would your response be? The goal is to lead them to find their own way to the answer. You don't want to give the bug away point-blank.
2. Tell us how you solved the bug. Did you use gdb (doing so is highly encouraged)? If so, what commands did you use? If you need a refresher on gdb, feel free to refer to the [CS33 GDB Guide](https://cs.brown.edu/courses/csci0330/docs/guides/gdb_cheatsheet.pdf).


**Compile & Run**

Once you clone the repository, you can `cd strings` and compile on the department machines using: `make clean all` or `make`. 

Run the tests: `./run_tests all`. The first time you run the tests, you should see this:
```
Testing for correctness...
=================== Running strncmp Tests. ===================
[FAILED Test 1: strncmp("abcde", "abdde", 3]: Expected -3, actual 64 (should be the same sign)
[FAILED Test 2: strncmp("corona", "coronatime")]: Expected -5, actual 64 (should be the same sign)
[FAILED Test 7: strncmp("professor", "rpf", 3)]: Expected -2, actual 64 (should be the same sign)
strncmp: Passed 7 tests, Failed 3 tests | 70.000000%
```

Good luck and please email us if you have any questions (cs0330headtas@lists.brown.edu). We're rooting for you! 
