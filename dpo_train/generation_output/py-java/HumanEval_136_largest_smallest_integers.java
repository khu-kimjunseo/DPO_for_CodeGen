### Python version

from typing import List
from typing import Tuple
from typing import Optional
def largest_smallest_integers(lst: List[int]) -> Tuple[Optional[int], Optional[int]]:
    smallest = list(filter(lambda x: x < 0, lst))
    largest = list(filter(lambda x: x > 0, lst))
    return (max(smallest) if smallest else None, min(largest) if largest else None)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(ArrayList<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(List<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(Tuple<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Map<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Set<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashMap<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashSet<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Hashtable<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashSet<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Map<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Set<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashMap<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashSet<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Hashtable<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashSet<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Map<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Set<Long> lst) {
        return largest_smallest_integers(lst);
    }
