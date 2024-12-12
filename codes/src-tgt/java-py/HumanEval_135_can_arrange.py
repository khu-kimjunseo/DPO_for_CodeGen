### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long canArrange(ArrayList<Long> arr) {
        long ind = -1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr.get(i) < arr.get(i-1)) {
                ind = i;
            }
        }
        return ind;
    }
    

}


### Python version

from typing import List

def can_arrange(arr: List[int]) -> int:
    ind=-1
    i=1
    while i<len(arr):
      if arr[i]<arr[i-1]:
        ind=i
      i+=1
    return ind
