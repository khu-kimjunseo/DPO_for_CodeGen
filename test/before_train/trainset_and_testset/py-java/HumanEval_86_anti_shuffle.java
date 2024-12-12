import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String antiShuffle(String s) {
        return anti_shuffle(s.toLowerCase());
    }
    public static void main(String[] args) {
    assert(antiShuffle(("Hi")).equals(("Hi")));
    assert(antiShuffle(("hello")).equals(("ehllo")));
    assert(antiShuffle(("number")).equals(("bemnru")));
    assert(antiShuffle(("abcd")).equals(("abcd")));
    assert(antiShuffle(("Hello World!!!")).equals(("Hello !!!Wdlor")));
    assert(antiShuffle(("")).equals(("")));
    assert(antiShuffle(("Hi. My name is Mister Robot. How are you?")).equals((".Hi My aemn is Meirst .Rboot How aer ?ouy")));
    }

}
