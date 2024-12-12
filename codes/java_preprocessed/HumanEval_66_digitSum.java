import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long digitSum(String s) {
        if (s.equals("")) return 0;
        return s.chars().filter(Character::isUpperCase).sum();
    }
    
    

}
