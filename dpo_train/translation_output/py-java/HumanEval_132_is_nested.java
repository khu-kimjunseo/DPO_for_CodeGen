import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isNested(String string) {
        return isNested(string, 0);
    }

    public static boolean isNested(String string, int depth) {
        if (depth == 0) {
            return true;
        }
        if (string.length() == 0) {
            return false;
        }
        if (string.charAt(0) == '[') {
            return isNested(string.substring(1), depth - 1);
        }
        if (string.charAt(0) == ']') {
            return isNested(string.substring(1), depth - 1);
        }
        return false;
    }
    public static void main(String[] args) {
    assert(isNested(("[[]]")) == (true));
    assert(isNested(("[]]]]]]][[[[[]")) == (false));
    assert(isNested(("[][]")) == (false));
    assert(isNested(("[]")) == (false));
    assert(isNested(("[[[[]]]]")) == (true));
    assert(isNested(("[]]]]]]]]]]")) == (false));
    assert(isNested(("[][][[]]")) == (true));
    assert(isNested(("[[]")) == (false));
    assert(isNested(("[]]")) == (false));
    assert(isNested(("[[]][[")) == (true));
    assert(isNested(("[[][]]")) == (true));
    assert(isNested(("")) == (false));
    assert(isNested(("[[[[[[[[")) == (false));
    assert(isNested(("]]]]]]]]")) == (false));
    }

}
