### Python version

from typing import List

def get_positive(l: List[int]) -> List[int]:
    return [e for e in l if e > 0]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> getPositive(ArrayList<Long> l) {
        return (ArrayList<Long>) l.stream().filter(e -> e > 0).collect(Collectors.toList());
    }
    

}

