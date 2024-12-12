import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static HashMap<String,Long> histogram(String test) {
        HashMap<String,Long> dict1=new HashMap<String,Long>();
        List<String> list1=Arrays.asList(test.split(" "));
        long t=0;
        for(String i:list1) {
            if(Collections.frequency(list1,i)>t && !i.equals("")) {
                t=Collections.frequency(list1,i);
            }
        }
        if(t>0) {
            for(String i:list1) {
                if(Collections.frequency(list1,i)==t) {
                    dict1.put(i,t);
                }
            }
        }
        return dict1;
    }
    
    public static void main(String[] args) {
    assert(histogram(("a b b a")).equals((new HashMap<String,Long>(Map.of("a", 2l, "b", 2l)))));
    assert(histogram(("a b c a b")).equals((new HashMap<String,Long>(Map.of("a", 2l, "b", 2l)))));
    assert(histogram(("a b c d g")).equals((new HashMap<String,Long>(Map.of("a", 1l, "b", 1l, "c", 1l, "d", 1l, "g", 1l)))));
    assert(histogram(("r t g")).equals((new HashMap<String,Long>(Map.of("r", 1l, "t", 1l, "g", 1l)))));
    assert(histogram(("b b b b a")).equals((new HashMap<String,Long>(Map.of("b", 4l)))));
    assert(histogram(("r t g")).equals((new HashMap<String,Long>(Map.of("r", 1l, "t", 1l, "g", 1l)))));
    assert(histogram(("")).equals((new HashMap<String,Long>())));
    assert(histogram(("a")).equals((new HashMap<String,Long>(Map.of("a", 1l)))));
    }

}
