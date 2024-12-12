import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isPalindrome(String text) {
        StringBuilder sb = new StringBuilder(text);
        return text.equals(sb.reverse().toString());
    }
    

}
