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
    lst.sort()
    new_lst = []
    for i in lst:
        if len(i)%2 == 0:
            new_lst.append(i)
    return sorted(new_lst, key=len)
