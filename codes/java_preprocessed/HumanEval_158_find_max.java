import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String findMax(ArrayList<String> words) {
        return words.stream()
            .sorted(Comparator.comparing((String s) -> -s.chars().distinct().count())
                    .thenComparing(Comparator.naturalOrder()))
            .findFirst().get();
    }
    
    

}
