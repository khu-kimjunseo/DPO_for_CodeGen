import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<String, Boolean> reverseDelete(String s, String c) {
        Pair<String, Boolean> res = new Pair<String, Boolean>();
        if (s.length() == 0) {
            res.first = c;
            res.second = true;
            return res;
        }
        if (s.length() == 1) {
            res.first = c;
            res.second = false;
            return res;
        }
        if (s.length() == 2) {
            res.first = c;
            res.second = s.length() == 2;
            return res;
        }
        if (s.length() == 3) {
            res.first = c;
            res.second = s.length() == 3;
            return res;
        }
        if (s.length() == 4) {
            res.first = c;
            res.second = s.length() == 4;
            return res;
        }
        if (s.length() == 5) {
            res.first = c;
            res.second = s.length() == 5;
            return res;
        }
        if (s.length() == 6) {
            res.first = c;
            res.second = s.length() == 6;
            return res;
        }
        if (s.length() == 7) {
            res.first = c;
            res.second = s.length() == 7;
            return res;
        }
        if (s.length() == 8) {
            res.first = c;
            res.second = s.length() == 8;
            return res;
        }
        if (s.length() == 9) {
            res.first = c;
            res.second = s.length() == 9;
            return res;
        }
        if (s.length() == 10) {
            res.first = c;
            res.second = s.length() == 10;
            return res;
        }
        if (s.length() == 11) {
            res.first = c;
            res.second = s.length() == 11;
            return res;
        }
        if (s.length() == 12) {
            res.first = c;
            res.second = s.length() == 12;
            return res;
        }
        if (s.length() == 13) {
            res.first = c;
            res.second = s.length() == 13;
            return res;
        }
        if (s.length() == 14) {
            res.first = c;
            res.second = s.length() == 14;
            return res;
        }
        if (s.length() == 15) {
            res.first = c;
            res.second = s.length() == 15;
            return res;
        }
        if (s.length() == 16) {
            res.first = c;
            res.second = s.length() == 16;
            return res;
        }
        if (s.length() == 17) {
            res.first = c;
            res.second = s.length() == 17;
            return res;
        }
        if (s.length() == 18) {
            res.first = c;
            res.second = s.length() == 18;

    public static void main(String[] args) {
    assert(reverseDelete(("abcde"), ("ae")).equals((Pair.with("bcd", false))));
    assert(reverseDelete(("abcdef"), ("b")).equals((Pair.with("acdef", false))));
    assert(reverseDelete(("abcdedcba"), ("ab")).equals((Pair.with("cdedc", true))));
    assert(reverseDelete(("dwik"), ("w")).equals((Pair.with("dik", false))));
    assert(reverseDelete(("a"), ("a")).equals((Pair.with("", true))));
    assert(reverseDelete(("abcdedcba"), ("")).equals((Pair.with("abcdedcba", true))));
    assert(reverseDelete(("abcdedcba"), ("v")).equals((Pair.with("abcdedcba", true))));
    assert(reverseDelete(("vabba"), ("v")).equals((Pair.with("abba", true))));
    assert(reverseDelete(("mamma"), ("mia")).equals((Pair.with("", true))));
    }

}
