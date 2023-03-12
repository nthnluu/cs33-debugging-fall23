#include <stdio.h>
#include "./strings.h"
#include "test_runner.h"

#define FUN_STRING                                                  \
  "Oh joy! Strings are so fun. [\"hip\", \"hip\"]\n"                \
  "What did the String say to the Integer? You're not my type...\n" \
  "Eight bytes walk into a bar. The bartender asks,\n"              \
  "\"Can I get you anything?\""                                     \
  "\"Yeah,\" reply the bytes. \"Make us a Double.\""

#define FUN_STRING2                              \
  "Oh joy! Strings are so fun. Hip Hip Array!\n" \
  "What did the String say to the Integer? You're not my type...\n"

// int strncmp(const char *s1, const char *s2, size_t n);
void test_strncmp() {
  /**** PROVIDED TESTS ****/
  assert_same_sign(-3, strncmp("abcde", "abdde", 3), "strncmp(\"abcde\", \"abdde\", 3"); 
  assert_same_sign(-5, strncmp("corona", "coronatime", 11), "strncmp(\"corona\", \"coronatime\")");
  assert_same_sign(0, strncmp("abc", "abc", 3), "strncmp(\"abc\", \"abc\", 3)"); 
  assert_same_sign(0, strncmp("", "", 0), "strncmp("", "", 0)"); 
  assert_same_sign(5, strncmp("1234567", "123", 100), "strncmp(\"1234567\", \"123\", 100)"); 
  assert_same_sign(0, strncmp("quarantine yourself", "quarantine", 10), "strncmp(\"quarantine yourself\", \"quarantine\", 11)");
  assert_same_sign(-2, strncmp("professor", "rpf", 3),
                   "strncmp(\"professor\", \"rpf\", 3)");
  assert_same_sign(114, strncmp("rpf", "", 3), "strncmp(\"rpf\", \"\", 3)");
  assert_same_sign(0, strncmp("rpf", "", 0), "strncmp(\"rpf\", \"\", 0)");

  assert_same_sign(0, strncmp(FUN_STRING2, FUN_STRING, 5),
                   "strncmp(FUN_STRING2, FUN_STRING, 5)");


  /**** FEEL FREE TO WRITE YOUR OWN TESTS ****/

}