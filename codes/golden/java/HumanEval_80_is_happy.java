import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isHappy(String s) {
        if (s.length() < 3) return false;
        for (int i = 0; i < s.length() - 2; i++) {
            if (s.charAt(i) == s.charAt(i+1) || s.charAt(i+1) == s.charAt(i+2) || s.charAt(i) == s.charAt(i+2)) return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
    assert(isHappy(("a")) == (false));
    assert(isHappy(("aa")) == (false));
    assert(isHappy(("abcd")) == (true));
    assert(isHappy(("aabb")) == (false));
    assert(isHappy(("adb")) == (true));
    assert(isHappy(("xyy")) == (false));
    assert(isHappy(("iopaxpoi")) == (true));
    assert(isHappy(("iopaxioi")) == (false));
    }

}
