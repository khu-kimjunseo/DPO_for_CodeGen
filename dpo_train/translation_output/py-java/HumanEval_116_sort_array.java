import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortArray(ArrayList<Long> arr) {
        return sortArray(arr, 0, arr.size());
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i++) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step, int step2) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step2) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step, int step2, int step3) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step2) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step3) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step, int step2, int step3, int step4) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step2) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step3) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step4) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step, int step2, int step3, int step4, int step5) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step2) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step3) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step4) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step5) {
            result.add
    public static void main(String[] args) {
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)1l, (long)5l, (long)2l, (long)3l, (long)4l)))).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)4l, (long)3l, (long)5l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)-2l, (long)-3l, (long)-4l, (long)-5l, (long)-6l)))).equals((new ArrayList<Long>(Arrays.asList((long)-4l, (long)-2l, (long)-6l, (long)-5l, (long)-3l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)1l, (long)0l, (long)2l, (long)3l, (long)4l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)1l, (long)2l, (long)4l, (long)3l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList()))).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)2l, (long)5l, (long)77l, (long)4l, (long)5l, (long)3l, (long)5l, (long)7l, (long)2l, (long)3l, (long)4l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)2l, (long)4l, (long)4l, (long)3l, (long)3l, (long)5l, (long)5l, (long)5l, (long)7l, (long)77l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)3l, (long)6l, (long)44l, (long)12l, (long)32l, (long)5l)))).equals((new ArrayList<Long>(Arrays.asList((long)32l, (long)3l, (long)5l, (long)6l, (long)12l, (long)44l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)8l, (long)16l, (long)32l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)8l, (long)16l, (long)32l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)8l, (long)16l, (long)32l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)8l, (long)16l, (long)32l)))));
    }

}
