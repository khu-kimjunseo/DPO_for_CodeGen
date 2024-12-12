import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> makeAPile(long n) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m, long k) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<k;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m, long k, long l) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<k;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<l;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m, long k, long l, long m2) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<k;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<l;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m2;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m, long k, long l, long m2, long n2) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<k;i++) {
            ans.add(n+2
    public static void main(String[] args) {
    assert(makeAPile((3l)).equals((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)7l)))));
    assert(makeAPile((4l)).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)6l, (long)8l, (long)10l)))));
    assert(makeAPile((5l)).equals((new ArrayList<Long>(Arrays.asList((long)5l, (long)7l, (long)9l, (long)11l, (long)13l)))));
    assert(makeAPile((6l)).equals((new ArrayList<Long>(Arrays.asList((long)6l, (long)8l, (long)10l, (long)12l, (long)14l, (long)16l)))));
    assert(makeAPile((8l)).equals((new ArrayList<Long>(Arrays.asList((long)8l, (long)10l, (long)12l, (long)14l, (long)16l, (long)18l, (long)20l, (long)22l)))));
    }

}
