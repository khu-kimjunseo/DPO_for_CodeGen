import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> getPositive(ArrayList<Long> l) {
        return (ArrayList<Long>) l.stream().filter(e -> e > 0).collect(Collectors.toList());
    }
    

}
