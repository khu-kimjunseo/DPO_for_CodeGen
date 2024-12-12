### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long largestPrimeFactor(long n) {
        long largest = 1;
        for (long j = 2; j <= n; j++) {
            if (n % j == 0 && isPrime(j)) {
                largest = Math.max(largest, j);
            }
        }
        return largest;
    }
    public static boolean isPrime(long k) {
        if (k < 2) return false;
        for (long i = 2; i < k; i++) {
            if (k % i == 0) return false;
        }
        return true;
    }
}

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long largest_prime_factor(long n) {
    long largest = 1;
    for (long i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            largest = Math.max(largest, i);
        }
    }
    return largest;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

#define MAXN 1000000

int n, m, k;
long long a[MAXN], b[MAXN], c[MAXN], d[MAXN], e[MAXN];

int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
    }
    long long ans = 0;
    for (int i = 0; i < m; i++) {
        ans += (a[i] * b[i] * c[i] * d[i] * e[i]);
    }
    cout << ans << endl;
}
