import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean cycpatternCheck(String a, String b) {
        int l = b.length();
        String pat = b + b;
        for (int i = 0; i <= a.length() - l; i++) {
            for (int j = 0; j <= l; j++) {
                if (a.substring(i, i+l).equals(pat.substring(j, j+l))) {
                    return true;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
    assert(cycpatternCheck(("xyzw"), ("xyw")) == (false));
    assert(cycpatternCheck(("yello"), ("ell")) == (true));
    assert(cycpatternCheck(("whattup"), ("ptut")) == (false));
    assert(cycpatternCheck(("efef"), ("fee")) == (true));
    assert(cycpatternCheck(("abab"), ("aabb")) == (false));
    assert(cycpatternCheck(("winemtt"), ("tinem")) == (true));
    }

}
