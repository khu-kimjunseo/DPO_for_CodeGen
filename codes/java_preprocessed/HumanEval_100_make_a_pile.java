import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> makeAPile(long n) {
        return IntStream.range(0, (int) n).mapToObj(i -> n + 2 * i).collect(Collectors.toCollection(ArrayList::new));
    }
    

}
