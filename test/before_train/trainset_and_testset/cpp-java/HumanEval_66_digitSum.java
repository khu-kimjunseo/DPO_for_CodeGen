import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long digitSum(String s) {
        long ans = 0;
        for (char c : s) {
            if (isupper(c)) ans += c;
        }
        return ans;
    }
    public static void main(String[] args) {
    assert(digitSum(("")) == (0l));
    assert(digitSum(("abAB")) == (131l));
    assert(digitSum(("abcCd")) == (67l));
    assert(digitSum(("helloE")) == (69l));
    assert(digitSum(("woArBld")) == (131l));
    assert(digitSum(("aAaaaXa")) == (153l));
    assert(digitSum((" How are yOu?")) == (151l));
    assert(digitSum(("You arE Very Smart")) == (327l));
    }

}