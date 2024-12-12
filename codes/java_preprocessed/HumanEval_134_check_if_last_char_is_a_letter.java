import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean checkIfLastCharIsALetter(String txt) {
        String check = txt.substring(txt.lastIndexOf(' ')+1);
        return (check.length() == 1 && (97 <= Character.toLowerCase(check.charAt(0)) && Character.toLowerCase(check.charAt(0)) <= 122));
    }
    
    

}
