import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long sumSquares(ArrayList<Long> lst) {
        long result = 0;
        for (int i = 0; i < lst.size(); i++) {
            if (i % 3 == 0) {
                result += Math.pow(lst.get(i), 2);
            } else if (i % 4 == 0 && i % 3 != 0) {
                result += Math.pow(lst.get(i), 3);
            } else {
                result += lst.get(i);
            }
        }
        return result;
    }
    

}
