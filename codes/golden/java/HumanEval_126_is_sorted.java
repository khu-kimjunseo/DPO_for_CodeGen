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
    public static void main(String[] args) {
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)5l)))) == (true));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l)))) == (true));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)4l, (long)5l)))) == (false));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)))) == (true));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l, (long)7l)))) == (true));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)4l, (long)5l, (long)6l, (long)7l)))) == (false));
    assert(isSorted((new ArrayList<Long>(Arrays.asList()))) == (true));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l)))) == (true));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)1l)))) == (false));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)2l, (long)2l, (long)3l, (long)4l)))) == (false));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)3l, (long)3l, (long)4l)))) == (false));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)2l, (long)3l, (long)3l, (long)4l)))) == (true));
    assert(isSorted((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l)))) == (true));
    }

}
