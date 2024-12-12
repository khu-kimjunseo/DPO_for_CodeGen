import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String changeBase(long x, long base) {
        return change_base(x, base);
    }
    public static String changeBase(long x, long base, long base2) {
        return change_base(x, base, base2);
    }
    public static String changeBase(long x, long base, long base2, long base3) {
        return change_base(x, base, base2, base3);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4) {
        return change_base(x, base, base2, base3, base4);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5) {
        return change_base(x, base, base2, base3, base4, base5);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6) {
        return change_base(x, base, base2, base3, base4, base5, base6);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8, long base9) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8, base9);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8, long base9, long base10) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8, base9, base10);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8, long base9, long base10, long base11) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8, base9, base10, base11);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8, long base9, long base10, long base11, long base12) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8, base9, base10, base11, base12);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4,
    public static void main(String[] args) {
    assert(changeBase((8l), (3l)).equals(("22")));
    assert(changeBase((9l), (3l)).equals(("100")));
    assert(changeBase((234l), (2l)).equals(("11101010")));
    assert(changeBase((16l), (2l)).equals(("10000")));
    assert(changeBase((8l), (2l)).equals(("1000")));
    assert(changeBase((7l), (2l)).equals(("111")));
    assert(changeBase((2l), (3l)).equals(("2")));
    assert(changeBase((3l), (4l)).equals(("3")));
    assert(changeBase((4l), (5l)).equals(("4")));
    assert(changeBase((5l), (6l)).equals(("5")));
    assert(changeBase((6l), (7l)).equals(("6")));
    assert(changeBase((7l), (8l)).equals(("7")));
    }

}
