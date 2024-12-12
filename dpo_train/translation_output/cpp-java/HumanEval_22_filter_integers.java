import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> filterIntegers(ArrayList<Object> values) {
        ArrayList<Long> res = new ArrayList<>();
        for (auto x : values) {
            if (x.type() == typeid(int)) {
                res.add(std::any_cast<int>(x));
            }
        }
        return res;
    }
    public static void main(String[] args) {
    assert(filterIntegers((new ArrayList<Object>(Arrays.asList()))).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(filterIntegers((new ArrayList<Object>(Arrays.asList(4l, new HashMap<Long,Long>(Map.of()), new ArrayList<Long>(Arrays.asList()), 23.2f, 9l, "adasd")))).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)9l)))));
    assert(filterIntegers((new ArrayList<Object>(Arrays.asList(3l, "c", 3l, 3l, "a", "b")))).equals((new ArrayList<Long>(Arrays.asList((long)3l, (long)3l, (long)3l)))));
    }

}
