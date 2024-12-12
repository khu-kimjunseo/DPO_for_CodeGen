### Python version

from typing import Dict

def check_dict_case(dict: Dict[str, str]) -> bool:
    if len(dict.keys()) == 0:
        return False
    else:
        state = "start"
        for key in dict.keys():

            if isinstance(key, str) == False:
                state = "mixed"
                break
            if state == "start":
                if key.isupper():
                    state = "upper"
                elif key.islower():
                    state = "lower"
                else:
                    break
            elif (state == "upper" and not key.isupper()) or (state == "lower" and not key.islower()):
                    state = "mixed"
                    break
            else:
                continue
        return state == "upper" or state == "lower"

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean checkDictCase(HashMap<String,String> dict) {
        return check_dict_case(dict);
    }
}

class Solution {
    public static void main(String[] args) {
        HashMap<String,String> dict = new HashMap<>();
        dict.put("a", "a");
        dict.put("b", "b");
        dict.put("c", "c");
        dict.put("d", "d");
        dict.put("e", "e");
        dict.put("f", "f");
        dict.put("g", "g");
        dict.put("h", "h");
        dict.put("i", "i");
        dict.put("j", "j");
        dict.put("k", "k");
        dict.put("l", "l");
        dict.put("m", "m");
        dict.put("n", "n");
        dict.put("o", "o");
        dict.put("p", "p");
        dict.put("q", "q");
        dict.put("r", "r");
        dict.put("s", "s");
        dict.put("t", "t");
        dict.put("u", "u");
        dict.put("v", "v");
        dict.put("w", "w");
        dict.put("x", "x");
        dict.put("y", "y");
        dict.put("z", "z");
        dict.put("A", "A");
        dict.put("B", "B");
        dict.put("C", "C");
        dict.put("D", "D");
        dict.put("E", "E");
        dict.put("F", "F");
        dict.put("G", "G");
        dict.put("H", "H");
        dict.put("I", "I");
        dict.put("J", "J");
        dict.put("K", "K");
        dict.put("L", "L");
        dict.put("M", "M");
        dict.put("N", "N");
        dict.put("O", "O");
        dict.put("P", "P");
        dict.put("Q", "Q");
        dict.put("R", "R");
        dict.put("S", "S");
        dict.put("T", "T");
        dict.put("U", "U");
        dict.put("V", "V");
        dict.put("W", "W");
        dict.put("X", "X");
        dict.put("Y", "Y");
        dict.put("Z", "Z");
        dict.put("A", "A");
        dict.put("B", "B");
        dict.put("C", "C");
        dict.put("D", "D");
        dict.put("E", "E");
        dict.put("F", "F");
        dict.put("G", "G");
        dict.put("H", "H");
        dict.put("I", "I");
        dict.put("J", "J");
        dict.put