### Python version

from typing import List

def strange_sort_list(lst: List[int]) -> List[int]:
    res, switch = [], True
    while lst:
        res.append(min(lst) if switch else max(lst))
        lst.remove(res[-1])
        switch = not switch
    return res

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
        for (int i = 0; i < lst.size(); i++) {
            res.add(lst.get(i));
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        // TODO Auto-generated method stub
        long[] a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] c = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] d = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] e = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] f = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] g = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] h = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] i = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] j = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] k = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] m = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] n = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] o = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] p = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] q = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] r = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] t = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] u = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] w = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] z = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] aa = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] bb = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long