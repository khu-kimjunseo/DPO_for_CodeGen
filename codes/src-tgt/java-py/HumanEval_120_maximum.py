### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> maximum(ArrayList<Long> arr, long k) {
        if (k == 0) {
            return new ArrayList<Long>();
        }
        Collections.sort(arr);
        return new ArrayList<Long>(arr.subList(arr.size() - (int)k, arr.size()));
    }
    
    

}


### Python version

from typing import List

def maximum(arr: List[int], k: int) -> List[int]:
    if k == 0:
        return []
    arr.sort()
    ans = arr[-k:]
    return ans
