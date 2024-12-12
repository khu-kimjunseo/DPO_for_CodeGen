import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> pluck(ArrayList<Long> arr) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) res.add(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val, long min) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        if(min == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val, long min, long max) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        if(min == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(max == 0) return res;
        for(long x: res) if(x > max) res.remove(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val, long min, long max, long step) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        if(min == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(max == 0) return res;
        for(long x: res) if(x > max) res.remove(x);
        if(step == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(step == 1) return res;
        for(long x: res) if(x > max) res.remove(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val, long min, long max, long step, long step2) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        if(min == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(max == 0) return res;
        for(long x: res) if(x > max) res.remove(x);
        if(step == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(step == 1) return res;
        for(long x: res) if(x >
    public static void main(String[] args) {
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)4l, (long)2l, (long)3l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList()))).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)5l, (long)0l, (long)3l, (long)0l, (long)4l, (long)2l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)0l, (long)5l, (long)3l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)3l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)5l, (long)4l, (long)8l, (long)4l, (long)8l)))).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)7l, (long)6l, (long)7l, (long)1l)))).equals((new ArrayList<Long>(Arrays.asList((long)6l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)7l, (long)9l, (long)7l, (long)1l)))).equals((new ArrayList<Long>(Arrays.asList()))));
    }

}
