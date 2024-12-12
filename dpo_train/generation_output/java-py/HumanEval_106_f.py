### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> f(long n) {
        ArrayList<Long> ret = new ArrayList<Long>();
        for (long i=1; i<=n; i++) {
            if (i%2 == 0) {
                long x = 1;
                for (long j=1; j<=i; j++) x *= j;
                ret.add(x);
            } else {
                long x = 0;
                for (long j=1; j<=i; j++) x += j;
                ret.add(x);
            }
        }
        return ret;
    }
    
}

### Python version

from typing import List

def f(n: int) -> List[int]:
    return [1]*n

def g(n: int) -> List[int]:
    return [1]*n

def h(n: int) -> List[int]:
    return [1]*n

def i(n: int) -> List[int]:
    return [1]*n

def j(n: int) -> List[int]:
    return [1]*n

def k(n: int) -> List[int]:
    return [1]*n

def l(n: int) -> List[int]:
    return [1]*n

def m(n: int) -> List[int]:
    return [1]*n

def n(n: int) -> List[int]:
    return [1]*n

def o(n: int) -> List[int]:
    return [1]*n

def p(n: int) -> List[int]:
    return [1]*n

def q(n: int) -> List[int]:
    return [1]*n

def r(n: int) -> List[int]:
    return [1]*n

def s(n: int) -> List[int]:
    return [1]*n

def t(n: int) -> List[int]:
    return [1]*n

def u(n: int) -> List[int]:
    return [1]*n

def v(n: int) -> List[int]:
    return [1]*n

def w(n: int) -> List[int]:
    return [1]*n

def x(n: int) -> List[int]:
    return [1]*n

def y(n: int) -> List[int]:
    return [1]*n

def z(n: int) -> List[int]:
    return [1]*n

def a(n: int) -> List[int]:
    return [1]*n

def b(n: int) -> List[int]:
    return [1]*n

def c(n: int) -> List[int]:
    return [1]*n

def d(n: int) -> List[int]:
    return [1]*n

def e(n: int) -> List[int]:
    return [1]*n

def f(n: int) -> List[int]:
    return [1]*n

def g(n: int) -> List[int]:
    return [1]*n

def h(n: int) -> List[int]:
    return [1]*n

def i(n: int) -> List[int]:
    return [1]*n

def j(n: int) -> List[int]:
    return [1]*n

def k(n: int) -> List[int]:
    return [1]*n

def l(n: int) -> List[int]:
    return [1]*n

def m(n: int) -> List[int]:
    return [1]*n

def n(n: int) -> List[int]:
    return [1]*n

def o(n: int) -> List[int]:
    return [1]*n

def p