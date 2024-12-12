### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> strangeSortList(ArrayList<Long> lst) {
        ArrayList<Long> res = new ArrayList<>();
        boolean switch_ = true;
        while (!lst.isEmpty()) {
            res.add(switch_ ? Collections.min(lst) : Collections.max(lst));
            lst.remove(res.get(res.size() - 1));
            switch_ = !switch_;
        }
        return res;
    }
    

}


### Python version

from typing import List

def strange_sort_list(lst: List[int]) -> List[int]:
    res, switch = [], True
    while lst:
        res.append(min(lst) if switch else max(lst))
        lst.remove(res[-1])
        switch = not switch
    return res
