### Python version

from typing import List

def by_length(arr: List[int]) -> List[str]:
    dic = {
        1: "One",
        2: "Two",
        3: "Three",
        4: "Four",
        5: "Five",
        6: "Six",
        7: "Seven",
        8: "Eight",
        9: "Nine",
    }
    sorted_arr = sorted(arr, reverse=True)
    new_arr = []
    for var in sorted_arr:
        try:
            new_arr.append(dic[var])
        except:
            pass
    return new_arr

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> byLength(ArrayList<Long> arr) {
        String[] dic = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        ArrayList<Long> sortedArr = (ArrayList<Long>) arr.stream().sorted(Comparator.reverseOrder()).collect(Collectors.toList());
        ArrayList<String> newArr = new ArrayList<String>();
        for (Long var : sortedArr) {
            if (var >= 1 && var <= 9) {
                newArr.add(dic[var.intValue()-1]);
            }
        }
        return newArr;
    }
    

}

