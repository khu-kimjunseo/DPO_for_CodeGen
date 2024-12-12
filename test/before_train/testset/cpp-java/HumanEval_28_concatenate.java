import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String concatenate(ArrayList<String> strings) {
        StringBuilder sb = new StringBuilder();
        for (String s : strings) {
            sb.append(s);
        }
        return sb.toString();
    }
    
    public static void main(String[] args) {
    assert(concatenate((new ArrayList<String>(Arrays.asList()))).equals(("")));
    assert(concatenate((new ArrayList<String>(Arrays.asList((String)"x", (String)"y", (String)"z")))).equals(("xyz")));
    assert(concatenate((new ArrayList<String>(Arrays.asList((String)"x", (String)"y", (String)"z", (String)"w", (String)"k")))).equals(("xyzwk")));
    }

}
