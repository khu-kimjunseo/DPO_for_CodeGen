### Python version

from typing import List
from typing import Tuple

def get_row(lst: List[List[int]], x: int) -> List[Tuple[int, int]]:
    coords = [(i, j) for i in range(len(lst)) for j in range(len(lst[i])) if lst[i][j] == x]
    return sorted(sorted(coords, key=lambda x: x[1], reverse=True), key=lambda x: x[0])

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Pair<Long, Long>> getRow(ArrayList<ArrayList<Long>> lst, long x) {
        ArrayList<Pair<Long, Long>> coords = new ArrayList<Pair<Long, Long>>();
        for (int i = 0; i < lst.size(); i++) {
            for (int j = 0; j < lst.get(i).size(); j++) {
                if (lst.get(i).get(j) == x) {
                    coords.add(new Pair<Long, Long>((long)i, (long)j));
                }
            }
        }
        coords.sort((a, b) -> {
            if (a.getValue0() == b.getValue0()) {
                return b.getValue1().compareTo(a.getValue1());
            }
            return a.getValue0().compareTo(b.getValue0());
        });
        return coords;
    }
    
    

}

