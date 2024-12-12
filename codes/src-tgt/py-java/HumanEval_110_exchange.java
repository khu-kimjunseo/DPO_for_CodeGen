### Python version

from typing import List

def exchange(lst1: List[int], lst2: List[int]) -> str:
    odd = 0
    even = 0
    for i in lst1:
        if i%2 == 1:
            odd += 1
    for i in lst2:
        if i%2 == 0:
            even += 1
    if even >= odd:
        return "YES"
    return "NO"

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String exchange(ArrayList<Long> lst1, ArrayList<Long> lst2) {
        long odd = lst1.stream().filter(i -> i % 2 == 1).count();
        long even = lst2.stream().filter(i -> i % 2 == 0).count();
        return even >= odd ? "YES" : "NO";
    }
    

}

