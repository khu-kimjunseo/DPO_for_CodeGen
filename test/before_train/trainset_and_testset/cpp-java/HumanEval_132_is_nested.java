import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isNested(String string) {
        return is_nested(string.substring(0, string.length() - 1));
    }
    public static String getNestedString(String string) {
        return string.substring(0, string.length() - 1);
    }
    public static String getNestedString(String string, int index) {
        return string.substring(0, index);
    }
    public static String getNestedString(String string, int index, int length) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4, int length4) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4, int length4) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4, int length4, int index5) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4, int length4, int index5, int length5) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int
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
