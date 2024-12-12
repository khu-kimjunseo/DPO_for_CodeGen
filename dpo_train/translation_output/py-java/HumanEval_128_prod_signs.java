import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = 0;
        for (int i = 0; i < arr.size(); i++) {
            prod = prod * arr.get(i);
        }
        return Optional.of(prod);
    }
    public static void main(String[] args) {
    assert(prodSigns((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)2l, (long)-4l)))).equals(Optional.of(-9l)));
    assert(prodSigns((new ArrayList<Long>(Arrays.asList((long)0l, (long)1l)))).equals(Optional.of(0l)));
    assert(prodSigns((new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)2l, (long)3l, (long)-1l, (long)1l)))).equals(Optional.of(-10l)));
    assert(prodSigns((new ArrayList<Long>(Arrays.asList()))).equals(Optional.empty()));
    assert(prodSigns((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)1l, (long)2l, (long)-1l, (long)-1l, (long)9l)))).equals(Optional.of(20l)));
    assert(prodSigns((new ArrayList<Long>(Arrays.asList((long)-1l, (long)1l, (long)-1l, (long)1l)))).equals(Optional.of(4l)));
    assert(prodSigns((new ArrayList<Long>(Arrays.asList((long)-1l, (long)1l, (long)1l, (long)1l)))).equals(Optional.of(-4l)));
    assert(prodSigns((new ArrayList<Long>(Arrays.asList((long)-1l, (long)1l, (long)1l, (long)0l)))).equals(Optional.of(0l)));
    }

}
