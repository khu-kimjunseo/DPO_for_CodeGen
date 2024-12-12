import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countDistinctCharacters(String string) {
        return string.toLowerCase().chars().distinct().count();
    }
    

}
