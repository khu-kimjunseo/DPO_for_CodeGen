### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortArray(ArrayList<Long> array) {
        if (array.size() == 0) {
            return new ArrayList<Long>();
        } else {
            boolean reverse = (array.get(0) + array.get(array.size() - 1)) % 2 == 0;
            Collections.sort(array);
            if (reverse) {
                Collections.reverse(array);
            }
            return array;
        }
    }
    

}


### Python version

from typing import List

def sort_array(array: List[int]) -> List[int]:
    return [] if len(array) == 0 else sorted(array, reverse= (array[0]+array[-1]) % 2 == 0)
