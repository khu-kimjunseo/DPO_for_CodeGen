import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<String, Boolean> reverseDelete(String s, String c) {
        s = s.chars().filter(ch -> c.indexOf(ch) == -1).mapToObj(Character::toString).collect(Collectors.joining());
        return Pair.with(s, new StringBuilder(s).reverse().toString().equals(s));
    }
    

}
