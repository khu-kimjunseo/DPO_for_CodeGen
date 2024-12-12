### Python version

from typing import List

def triples_sum_to_zero(l: List[int]) -> bool:
    for i in range(len(l)):
        for j in range(i + 1, len(l)):
            for k in range(j + 1, len(l)):
                if l[i] + l[j] + l[k] == 0:
                    return True
    return False

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean triplesSumToZero(ArrayList<Long> l) {
        for (int i=0; i<l.size(); i++) {
            for (int j=i+1; j<l.size(); j++) {
                for (int k=j+1; k<l.size(); k++) {
                    if (l.get(i) + l.get(j) + l.get(k) == 0) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
    

}

