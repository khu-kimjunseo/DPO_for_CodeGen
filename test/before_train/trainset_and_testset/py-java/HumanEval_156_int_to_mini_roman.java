import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String intToMiniRoman(long number) {
        return int_to_mini_roman(number / 1000);
    }
    public static String int_to_mini_roman(int number) {
        return int_to_mini_roman(number / 1000000);
    }
    public static String int_to_mini_roman(int number, int div) {
        return int_to_mini_roman(number / div);
    }
    public static String int_to_mini_roman(long number, int div) {
        return int_to_mini_roman(number / div);
    }
    public static String int_to_mini_roman(int number, int div, int mod) {
        return int_to_mini_roman(number / div, mod);
    }
    public static String int_to_mini_roman(long number, int div, int mod) {
        return int_to_mini_roman(number / div, mod);
    }
    public static String int_to_mini_roman(int number, int div, int mod, int div2) {
        return int_to_mini_roman(number / div, mod, div2);
    }
    public static String int_to_mini_roman(long number, int div, int mod, int div2) {
        return int_to_mini_roman(number / div, mod, div2);
    }
    public static String int_to_mini_roman(int number, int div, int mod, int div2, int div3) {
        return int_to_mini_roman(number / div, mod, div2, div3);
    }
    public static String int_to_mini_roman(long number, int div, int mod, int div2, int div3) {
        return int_to_mini_roman(number / div, mod, div2, div3);
    }
    public static String int_to_mini_roman(int number, int div, int mod, int div2, int div3, int div4) {
        return int_to_mini_roman(number / div, mod, div2, div3, div4);
    }
    public static String int_to_mini_roman(long number, int div, int mod, int div2, int div3, int div4) {
        return int_to_mini_roman(number / div, mod, div2, div3, div4);
    }
    public static String int_to_mini_roman(int number, int div, int mod, int div2, int div3, int div4, int div5) {
        return int_to_mini_roman(number / div, mod, div2, div3, div4, div5);
    }
    public static String int_to_mini_roman(long number, int div, int mod, int div2, int div3, int div4, int div5, int div6) {
        return int_to_mini_roman(number / div, mod, div2, div3, div4, div5, div6);
    }
    public static String int_to_mini_roman(int number, int div, int mod, int div2, int div3, int div4, int div5, int div6, int div7) {
        return int_to_mini_roman(number / div, mod,
    public static void main(String[] args) {
    assert(intToMiniRoman((19l)).equals(("xix")));
    assert(intToMiniRoman((152l)).equals(("clii")));
    assert(intToMiniRoman((251l)).equals(("ccli")));
    assert(intToMiniRoman((426l)).equals(("cdxxvi")));
    assert(intToMiniRoman((500l)).equals(("d")));
    assert(intToMiniRoman((1l)).equals(("i")));
    assert(intToMiniRoman((4l)).equals(("iv")));
    assert(intToMiniRoman((43l)).equals(("xliii")));
    assert(intToMiniRoman((90l)).equals(("xc")));
    assert(intToMiniRoman((94l)).equals(("xciv")));
    assert(intToMiniRoman((532l)).equals(("dxxxii")));
    assert(intToMiniRoman((900l)).equals(("cm")));
    assert(intToMiniRoman((994l)).equals(("cmxciv")));
    assert(intToMiniRoman((1000l)).equals(("m")));
    }

}
