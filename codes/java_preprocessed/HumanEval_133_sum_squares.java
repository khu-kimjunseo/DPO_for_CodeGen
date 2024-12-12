import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long sumSquares(ArrayList<Float> lst) {
        long squared = 0;
        for (float i : lst) {
            squared += Math.ceil(i) * Math.ceil(i);
        }
        return squared;
    }
    

}
