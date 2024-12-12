import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> allPrefixes(String string) {
        ArrayList<String> result = new ArrayList<>();
        for(int i=0;i<string.length();i++) {
            if(string.substring(0,i+1).equals(string.substring(i+1,string.length()))) {
                result.add(string.substring(0,i+1));
            }
        }
        return result;
    }
    
    public static void main(String[] args) {
    assert(allPrefixes(("")).equals((new ArrayList<String>(Arrays.asList()))));
    assert(allPrefixes(("asdfgh")).equals((new ArrayList<String>(Arrays.asList((String)"a", (String)"as", (String)"asd", (String)"asdf", (String)"asdfg", (String)"asdfgh")))));
    assert(allPrefixes(("WWW")).equals((new ArrayList<String>(Arrays.asList((String)"W", (String)"WW", (String)"WWW")))));
    }

}