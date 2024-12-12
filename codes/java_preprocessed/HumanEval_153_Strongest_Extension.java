import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String StrongestExtension(String class_name, ArrayList<String> extensions) {
        String strong = extensions.get(0);
        int myVal = extensions.get(0).replaceAll("[^A-Z]", "").length() - extensions.get(0).replaceAll("[^a-z]", "").length();
        for (String s : extensions) {
            int val = s.replaceAll("[^A-Z]", "").length() - s.replaceAll("[^a-z]", "").length();
            if (val > myVal) {
                strong = s;
                myVal = val;
            }
        }
        return class_name + "." + strong;
    }
    

}
