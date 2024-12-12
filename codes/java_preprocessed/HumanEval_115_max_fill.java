import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxFill(ArrayList<ArrayList<Long>> grid, long capacity) {
        return grid.stream().mapToLong(arr -> (long)Math.ceil(arr.stream().mapToLong(x -> x).sum()/(double)capacity)).sum();
    }
    
    

}
