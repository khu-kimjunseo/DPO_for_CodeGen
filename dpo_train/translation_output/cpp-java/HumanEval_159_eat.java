import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> eat(long number, long need, long remaining) {
        ArrayList<Long> result = new ArrayList<>();
        ArrayList<Long> eat = eat(number, need, remaining);
        for(long i = 0; i < eat.size(); i++){
            result.add(eat.get(i));
        }
        return result;
    }
    public static void main(String[] args) {
    assert(eat((5l), (6l), (10l)).equals((new ArrayList<Long>(Arrays.asList((long)11l, (long)4l)))));
    assert(eat((4l), (8l), (9l)).equals((new ArrayList<Long>(Arrays.asList((long)12l, (long)1l)))));
    assert(eat((1l), (10l), (10l)).equals((new ArrayList<Long>(Arrays.asList((long)11l, (long)0l)))));
    assert(eat((2l), (11l), (5l)).equals((new ArrayList<Long>(Arrays.asList((long)7l, (long)0l)))));
    assert(eat((4l), (5l), (7l)).equals((new ArrayList<Long>(Arrays.asList((long)9l, (long)2l)))));
    assert(eat((4l), (5l), (1l)).equals((new ArrayList<Long>(Arrays.asList((long)5l, (long)0l)))));
    }

}
