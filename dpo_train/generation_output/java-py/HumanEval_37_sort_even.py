### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortEven(ArrayList<Long> l) {
        ArrayList<Long> evens = new ArrayList<Long>();
        ArrayList<Long> odds = new ArrayList<Long>();
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                evens.add(l.get(i));
            } else {
                odds.add(l.get(i));
            }
        }
        Collections.sort(evens);
        ArrayList<Long> ans = new ArrayList<Long>();
        for (int i = 0; i < evens.size(); i++) {
            ans.add(evens.get(i));
            if (i < odds.size()) {
                ans.add(odds.get(i));
            }
        }
        return ans;
    }
}

### Python version

from typing import List

def sort_even(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x % 2)

def sort_odd(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x % 2)

def sort_even_by_value(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value)

def sort_odd_by_value(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value)

def sort_even_by_value_by_index(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_odd_by_value_by_index(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_even_by_index(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.index)

def sort_odd_by_index(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.index)

def sort_even_by_index_by_value(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_odd_by_index_by_value(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_even_by_index_by_value_by_index(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_odd_by_index_by_value_by_index(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_even_by_index_by_value_by_index(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_even_by_index_by_value_by_index_by_value(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_even_by_index_by_value_by_index_by_value(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_even_by_index_by_value_by_index_by_value(l: List[int]) -> List[int]:
    return sorted(l, key=lambda x: x.value, reverse=True)

def sort_even_by_index_by_value_by