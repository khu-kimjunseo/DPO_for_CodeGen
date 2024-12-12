### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> sortedListSum(ArrayList<String> lst) {
        lst.sort(null);
        ArrayList<String> new_lst = new ArrayList<String>();
        for (String i : lst) {
            if (i.length() % 2 == 0) {
                new_lst.add(i);
            }
        }
        new_lst.sort((a, b) -> a.length() - b.length());
        return new_lst;
    }
}

### Python version

from typing import List

def sorted_list_sum(lst: List[str]) -> List[str]:
    lst.sort(null);
    return lst

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.substring(0, s.length() - 1)).collect(Collectors.toList());
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<String> sortedListSum(List<String> lst) {
        return lst.stream().map(s -> s.sub