import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> maximum(ArrayList<Long> arr, long k) {
        ArrayList<Long> ans = new ArrayList<>();
        for (long i = 0; i < arr.size(); i++) {
            if (arr.get(i) > k) {
                ans.add(arr.get(i));
            }
        }
        return ans;
    }
    public static void main(String[] args) {
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)-3l, (long)-4l, (long)5l))), (3l)).equals((new ArrayList<Long>(Arrays.asList((long)-4l, (long)-3l, (long)5l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)4l, (long)-4l, (long)4l))), (2l)).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)4l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)-3l, (long)2l, (long)1l, (long)2l, (long)-1l, (long)-2l, (long)1l))), (1l)).equals((new ArrayList<Long>(Arrays.asList((long)2l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)123l, (long)-123l, (long)20l, (long)0l, (long)1l, (long)2l, (long)-3l))), (3l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)20l, (long)123l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)-123l, (long)20l, (long)0l, (long)1l, (long)2l, (long)-3l))), (4l)).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)1l, (long)2l, (long)20l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)5l, (long)15l, (long)0l, (long)3l, (long)-13l, (long)-8l, (long)0l))), (7l)).equals((new ArrayList<Long>(Arrays.asList((long)-13l, (long)-8l, (long)0l, (long)0l, (long)3l, (long)5l, (long)15l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)-1l, (long)0l, (long)2l, (long)5l, (long)3l, (long)-10l))), (2l)).equals((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)1l, (long)0l, (long)5l, (long)-7l))), (1l)).equals((new ArrayList<Long>(Arrays.asList((long)5l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)4l, (long)-4l))), (2l)).equals((new ArrayList<Long>(Arrays.asList((long)-4l, (long)4l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)-10l, (long)10l))), (2l)).equals((new ArrayList<Long>(Arrays.asList((long)-10l, (long)10l)))));
    assert(maximum((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)-23l, (long)243l, (long)-400l, (long)0l))), (0l)).equals((new ArrayList<Long>(Arrays.asList()))));
    }

}
