import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> tri(long n) {
        if (n == 0) {
            return new ArrayList<Long>(Arrays.asList(1L));
        }
        ArrayList<Long> my_tri = new ArrayList<Long>(Arrays.asList(1L, 3L));
        for (int i = 2; i <= n; i++) {
            long term = i % 2 == 0 ? i / 2 + 1 : my_tri.get(i - 1) + my_tri.get(i - 2) + (i + 3) / 2;
            my_tri.add(term);
        }
        return my_tri;
    }
    

}
