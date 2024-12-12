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
        long[] num = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        String[] sym = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int i = 12;
        String res = "";
        while (number > 0) {
            long div = number / num[i];
            number %= num[i];
            while (div > 0) {
                res += sym[i];
                div--;
            }
            i--;
        }
        return res.toLowerCase();
    }
}

### Python version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version

def int_to_mini_roman(number: int) -> str:
    return Problem.intToMiniRoman(number)

### Java version
