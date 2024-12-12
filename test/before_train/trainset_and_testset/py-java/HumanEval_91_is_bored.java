import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long isBored(String S) {
        return is_bored(S.toLowerCase());
    }
    public static void main(String[] args) {
    assert(isBored(("Hello world")) == (0l));
    assert(isBored(("Is the sky blue?")) == (0l));
    assert(isBored(("I love It !")) == (1l));
    assert(isBored(("bIt")) == (0l));
    assert(isBored(("I feel good today. I will be productive. will kill It")) == (2l));
    assert(isBored(("You and I are going for a walk")) == (0l));
    }

}
