### Python version

from typing import List

def odd_count(lst: List[str]) -> List[str]:
    res = []
    for arr in lst:
        n = sum(int(d)%2==1 for d in arr)
        res.append("the number of odd elements " + str(n) + "n the str"+ str(n) +"ng "+ str(n) +" of the "+ str(n) +"nput.")
    return res

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> oddCount(ArrayList<String> lst) {
        ArrayList<String> res = new ArrayList<>();
        for (int i = 0; i < lst.size(); i++) {
            String str = lst.get(i);
            int n = str.length();
            if (n % 2 == 1) {
                res.add(str);
            }
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> lst = new ArrayList<>();
        lst.add("the number of odd elements " + odd_count(lst));
        System.out.println(lst);
    }
}
