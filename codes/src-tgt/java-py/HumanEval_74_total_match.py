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
        int l1 = lst1.stream().mapToInt(String::length).sum();
        int l2 = lst2.stream().mapToInt(String::length).sum();
        return l1 <= l2 ? lst1 : lst2;
    }
    

}


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
