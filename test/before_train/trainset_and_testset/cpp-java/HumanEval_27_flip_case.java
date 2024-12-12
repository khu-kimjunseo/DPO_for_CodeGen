import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String flipCase(String string) {
        return flip_case(string.toLowerCase());
    }
    public static String flipCase(String string, String prefix) {
        return prefix + flip_case(string);
    }
    public static String flipCase(String string, String prefix, String suffix) {
        return prefix + flip_case(string) + suffix;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2) {
        return prefix + flip_case(string) + suffix + suffix2;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3, String suffix4) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3 + suffix4;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3, String suffix4, String suffix5) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3 + suffix4 + suffix5;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3, String suffix4, String suffix5, String suffix6) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3 + suffix4 + suffix5 + suffix6;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3, String suffix4, String suffix5, String suffix6, String suffix7) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3 + suffix4 + suffix5 + suffix6 + suffix7;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3, String suffix4, String suffix5, String suffix6, String suffix7, String suffix8) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3 + suffix4 + suffix5 + suffix6 + suffix7 + suffix8;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3, String suffix4, String suffix5, String suffix6, String suffix7, String suffix8, String suffix9) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3 + suffix4 + suffix5 + suffix6 + suffix7 + suffix8 + suffix9;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3, String suffix4, String suffix5, String suffix6, String suffix7, String suffix8, String suffix9, String suffix10) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3 + suffix4 + suffix5 + suffix6 + suffix7 + suffix8 + suffix9 + suffix10;
    }
    public static String flipCase(String string, String prefix, String suffix, String suffix2, String suffix3, String suffix4, String suffix5, String suffix6, String suffix7, String suffix8, String suffix9, String suffix10, String suffix11) {
        return prefix + flip_case(string) + suffix + suffix2 + suffix3 + suffix4 + suffix5 + suffix6 + suffix7 + suffix8 + suffix9 + suffix10 + suffix11;
    }
    public
    public static void main(String[] args) {
    assert(flipCase(("")).equals(("")));
    assert(flipCase(("Hello!")).equals(("hELLO!")));
    assert(flipCase(("These violent delights have violent ends")).equals(("tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS")));
    }

}
