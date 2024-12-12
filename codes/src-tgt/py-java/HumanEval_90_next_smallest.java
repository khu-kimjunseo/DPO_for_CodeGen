### Python version

from typing import List
from typing import Optional

def next_smallest(lst: List[int]) -> Optional[int]:
    lst = sorted(set(lst))
    return None if len(lst) < 2 else lst[1]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> nextSmallest(ArrayList<Long> lst) {
        return lst.stream().sorted().distinct().skip(1).findFirst();
    }
    
    

}

