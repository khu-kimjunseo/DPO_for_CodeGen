### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean willItFly(ArrayList<Long> q, long w) {
        if(q.stream().mapToLong(Long::longValue).sum() > w) return false;
        int i = 0, j = q.size()-1;
        while(i < j) {
            if(q.get(i) != q.get(j)) return false;
            i++;
            j--;
        }
        return true;
    }
    

}


### Python version

from typing import List

def will_it_fly(q: List[int], w: int) -> bool:
    if sum(q) > w:
        return False

    i, j = 0, len(q)-1
    while i<j:
        if q[i] != q[j]:
            return False
        i+=1
        j-=1
    return True
