### Python version

from typing import List

def total_match(lst1: List[str], lst2: List[str]) -> List[str]:
    l1 = 0
    for st in lst1:
        l1 += len(st)
    
    l2 = 0
    for st in lst2:
        l2 += len(st)
    
    if l1 <= l2:
        return lst1
    else:
        return lst2

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> totalMatch(ArrayList<String> lst1, ArrayList<String> lst2) {
        ArrayList<String> res = new ArrayList<>();
        for (int i = 0; i < lst1.size(); i++) {
            String s1 = lst1.get(i);
            String s2 = lst2.get(i);
            if (s1.equals(s2)) {
                res.add(s1);
            }
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> lst1 = new ArrayList<>();
        ArrayList<String> lst2 = new ArrayList<>();
        lst1.add("a");
        lst1.add("b");
        lst1.add("c");
        lst1.add("d");
        lst1.add("e");
        lst1.add("f");
        lst1.add("g");
        lst1.add("h");
        lst1.add("i");
        lst1.add("j");
        lst1.add("k");
        lst1.add("l");
        lst1.add("m");
        lst1.add("n");
        lst1.add("o");
        lst1.add("p");
        lst1.add("q");
        lst1.add("r");
        lst1.add("s");
        lst1.add("t");
        lst1.add("u");
        lst1.add("v");
        lst1.add("w");
        lst1.add("x");
        lst1.add("y");
        lst1.add("z");
        lst1.add("a");
        lst1.add("b");
        lst1.add("c");
        lst1.add("d");
        lst1.add("e");
        lst1.add("f");
        lst1.add("g");
        lst1.add("h");
        lst1.add("i");
        lst1.add("j");
        lst1.add("k");
        lst1.add("l");
        lst1.add("m");
        lst1.add("n");
        lst1.add("o");
        lst1.add("p");
        lst1.add("q");
        lst1.add("r");
        lst1.add("s");
        lst1.add("t");
        lst1.add("u");
        lst1.add("v");
        lst1.add("w");
        lst1.add("x");
        lst1.add("y");
        lst1.add("z");
        lst1.add("a");
        lst1.add("b");
        lst1.add("c");
        lst1.add("d");
        lst1.add("e");
        lst1.add("f");
        lst1.add("g");
        lst1.add("h");
        lst1.add("i");
        lst1.add("j");
        lst1.add("k");
        lst1.add("l");
        lst1.add("m");
        lst1.add("n");