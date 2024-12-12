import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String stringXor(String a, String b) {
        String ans = "";
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]) ans += '0';
            else ans += '1';
        }
        return ans;
    }
    public static void main(String[] args) {
    assert(stringXor(("111000"), ("101010")).equals(("010010")));
    assert(stringXor(("1"), ("1")).equals(("0")));
    assert(stringXor(("0101"), ("0000")).equals(("0101")));
    }

}
