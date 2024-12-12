import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortArray(ArrayList<Long> array) {
        return sortArray(array, 0, array.size());
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i++) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i++) {
            result.add(array.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end, int step) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step) {
            result.add(array.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end, int step, int step2) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step2) {
            result.add(array.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end, int step, int step2, int step3) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step2) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step3) {
            result.add(array.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end, int step, int step2, int step3, int step4) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step) {
            result.add(array.get
    public static void main(String[] args) {
    assert(sortArray((new ArrayList<Long>(Arrays.asList()))).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)5l)))).equals((new ArrayList<Long>(Arrays.asList((long)5l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)3l, (long)0l, (long)1l, (long)5l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)1l, (long)2l, (long)3l, (long)4l, (long)5l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)3l, (long)0l, (long)1l, (long)5l, (long)6l)))).equals((new ArrayList<Long>(Arrays.asList((long)6l, (long)5l, (long)4l, (long)3l, (long)2l, (long)1l, (long)0l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)2l, (long)1l)))).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)15l, (long)42l, (long)87l, (long)32l, (long)11l, (long)0l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)11l, (long)15l, (long)32l, (long)42l, (long)87l)))));
    assert(sortArray((new ArrayList<Long>(Arrays.asList((long)21l, (long)14l, (long)23l, (long)11l)))).equals((new ArrayList<Long>(Arrays.asList((long)23l, (long)21l, (long)14l, (long)11l)))));
    }

}
