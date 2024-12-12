import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long hexKey(String num) {
        long key = 0;
        for (int i = 0; i < num.length(); i++) {
            key = (key << 4) + num.charAt(i);
        }
        return key;
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
