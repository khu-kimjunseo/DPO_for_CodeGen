import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean iscube(long a) {
        a = Math.abs(a);
        return Math.pow(Math.round(Math.cbrt(a)), 3) == a;
    }
    
    

}
