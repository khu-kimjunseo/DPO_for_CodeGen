### Python version

from typing import List

def is_sorted(lst: List[int]) -> bool:
    count_digit = dict([(i, 0) for i in lst])
    for i in lst:
        count_digit[i]+=1
    if any(count_digit[i] > 2 for i in lst):
        return False
    if all(lst[i-1] <= lst[i] for i in range(1, len(lst))):
        return True
    else:
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
    public static boolean isSorted(ArrayList<Long> lst) {
        HashMap<Long, Long> count_digit = new HashMap<Long, Long>();
        for (long i : lst) {
            if (count_digit.containsKey(i)) {
                count_digit.put(i, count_digit.get(i) + 1);
            } else {
                count_digit.put(i, 1L);
            }
        }
        for (long i : lst) {
            if (count_digit.get(i) > 2) {
                return false;
            }
        }
        for (int i = 1; i < lst.size(); i++) {
            if (lst.get(i - 1) > lst.get(i)) {
                return false;
            }
        }
        return true;
    }
    

}

