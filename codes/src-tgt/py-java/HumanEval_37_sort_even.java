### Python version

from typing import List

def sort_even(l: List[int]) -> List[int]:
    evens = l[::2]
    odds = l[1::2]
    evens.sort()
    ans = []
    for e, o in zip(evens, odds):
        ans.extend([e, o])
    if len(evens) > len(odds):
        ans.append(evens[-1])
    return ans

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortEven(ArrayList<Long> l) {
        ArrayList<Long> evens = new ArrayList<Long>();
        ArrayList<Long> odds = new ArrayList<Long>();
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                evens.add(l.get(i));
            } else {
                odds.add(l.get(i));
            }
        }
        Collections.sort(evens);
        ArrayList<Long> ans = new ArrayList<Long>();
        for (int i = 0; i < evens.size(); i++) {
            ans.add(evens.get(i));
            if (i < odds.size()) {
                ans.add(odds.get(i));
            }
        }
        return ans;
    }
    

}

