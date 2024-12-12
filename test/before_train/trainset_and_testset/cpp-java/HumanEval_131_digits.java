import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long digits(long n) {
        long product = 1;
        int odd_count = 0;
        for (char digit : std::to_string(n)) {
            int int_digit = digit - '0';
            if (int_digit % 2 == 1) {
                product *= int_digit;
                odd_count++;
            }
        }
        return odd_count == 0 ? 0 : product;
    }
    public static void main(String[] args) {
    assert(digits((5l)) == (5l));
    assert(digits((54l)) == (5l));
    assert(digits((120l)) == (1l));
    assert(digits((5014l)) == (5l));
    assert(digits((98765l)) == (315l));
    assert(digits((5576543l)) == (2625l));
    assert(digits((2468l)) == (0l));
    }

}