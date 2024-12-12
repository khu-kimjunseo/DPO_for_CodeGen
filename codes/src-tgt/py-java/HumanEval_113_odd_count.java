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
        ArrayList<String> res = new ArrayList<String>();
        for (String arr : lst) {
            int n = (int) Arrays.stream(arr.split("")).filter(d -> Integer.parseInt(d) % 2 == 1).count();
            res.add("the number of odd elements " + n + "n the str"+ n +"ng "+ n +" of the "+ n +"nput.");
        }
        return res;
    }
    

}

