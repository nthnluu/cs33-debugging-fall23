/*
 * Brown University - Department of Computer Science
 * Originally created by Prof. Thomas W. Doeppner
 */

/*      _        _
 *  ___| |_ _ __(_)_ __   __ _ ___
 * / __| __| '__| | '_ \ / _` / __|
 * \__ \ |_| |  | | | | | (_| \__ \
 * |___/\__|_|  |_|_| |_|\__, |___/
 *                       |___/
 */

#include <stdlib.h>

/*
 * strncmp() - abbreviated from "string compare (n bytes)".
 * - Description: compares up to the first n bytes of two strings, s1 and s2
 *
 * - Arguments: two null terminated strings (s1 and s2) and the maximum number
 * of bytes to compare (n).
 *
 * - Return value: negative number if s1 < s2, 0 if s1 == s2, positive number if
 * s1 > s2
 *
 * Examples:
 * 1. <  strncmp("abcde", "abdde", 3) = some negative number
 * 2. ==  strncmp("abcde", "abdde", 2) = 0
 * 3. >  strncmp("1234567", "123", 100) = some positive number
 *
 *  - Hint: You can use the other string functions you implemented.
 */
int strncmp(const char* s1, const char* s2, size_t n) {

  while (n && *s1 && *s1 == *s2) {
    n--; 
    s1++;
    s2++;
  }

  int res;
  if (!n) { 
    res = n;
  } else {
    res = s1 - s2;
  }

  return res; 

}
