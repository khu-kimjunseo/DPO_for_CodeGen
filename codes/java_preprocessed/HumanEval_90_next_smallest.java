import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> nextSmallest(ArrayList<Long> lst) {
        return lst.stream().sorted().distinct().skip(1).findFirst();
    }
    
    

}
