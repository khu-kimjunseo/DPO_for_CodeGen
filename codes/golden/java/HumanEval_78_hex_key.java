import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long hexKey(String num) {
        String primes = "2357BD";
        long total = 0;
        for (int i = 0; i < num.length(); i++) {
            if (primes.indexOf(num.charAt(i)) >= 0) {
                total++;
            }
        }
        return total;
    }
    public static void main(String[] args) {
    assert(hexKey(("AB")) == (1l));
    assert(hexKey(("1077E")) == (2l));
    assert(hexKey(("ABED1A33")) == (4l));
    assert(hexKey(("2020")) == (2l));
    assert(hexKey(("123456789ABCDEF0")) == (6l));
    assert(hexKey(("112233445566778899AABBCCDDEEFF00")) == (12l));
    }

}
