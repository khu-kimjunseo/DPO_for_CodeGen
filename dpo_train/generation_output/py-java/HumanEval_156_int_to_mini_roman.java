### Python version

def int_to_mini_roman(number: int) -> str:
    num = [1, 4, 5, 9, 10, 40, 50, 90,  
           100, 400, 500, 900, 1000] 
    sym = ["I", "IV", "V", "IX", "X", "XL",  
           "L", "XC", "C", "CD", "D", "CM", "M"] 
    i = 12
    res = ''
    while number: 
        div = number // num[i] 
        number %= num[i] 
        while div: 
            res += sym[i] 
            div -= 1
        i -= 1
    return res.lower()

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
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