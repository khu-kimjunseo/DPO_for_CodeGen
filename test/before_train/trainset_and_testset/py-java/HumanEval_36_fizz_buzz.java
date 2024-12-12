import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fizzBuzz(long n) {
        long ans = 0;
        if (n == 0) {
            return 1;
        }
        if (n % 2 == 0) {
            ans += fizzBuzz(n / 2);
        }
        if (n % 3 == 0) {
            ans += fizzBuzz(n / 3);
        }
        if (n % 5 == 0) {
            ans += fizzBuzz(n / 5);
        }
        if (n % 7 == 0) {
            ans += fizzBuzz(n / 7);
        }
        if (n % 11 == 0) {
            ans += fizzBuzz(n / 11);
        }
        if (n % 13 == 0) {
            ans += fizzBuzz(n / 13);
        }
        return ans;
    }
    public static void main(String[] args) {
    assert(fizzBuzz((50l)) == (0l));
    assert(fizzBuzz((78l)) == (2l));
    assert(fizzBuzz((79l)) == (3l));
    assert(fizzBuzz((100l)) == (3l));
    assert(fizzBuzz((200l)) == (6l));
    assert(fizzBuzz((4000l)) == (192l));
    assert(fizzBuzz((10000l)) == (639l));
    assert(fizzBuzz((100000l)) == (8026l));
    }

}
