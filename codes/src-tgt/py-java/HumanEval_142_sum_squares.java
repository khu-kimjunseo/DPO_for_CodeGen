### Python version

from typing import List

def sum_squares(lst: List[int]) -> int:
    result =[]
    for i in range(len(lst)):
        if i %3 == 0:
            result.append(lst[i]**2)
        elif i % 4 == 0 and i%3 != 0:
            result.append(lst[i]**3)
        else:
            result.append(lst[i])
    return sum(result)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long sumSquares(ArrayList<Long> lst) {
        long result = 0;
        for (int i = 0; i < lst.size(); i++) {
            if (i % 3 == 0) {
                result += Math.pow(lst.get(i), 2);
            } else if (i % 4 == 0 && i % 3 != 0) {
                result += Math.pow(lst.get(i), 3);
            } else {
                result += lst.get(i);
            }
        }
        return result;
    }
    

}

