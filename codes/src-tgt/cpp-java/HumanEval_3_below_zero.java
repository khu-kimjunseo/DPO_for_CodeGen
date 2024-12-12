### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool below_zero(std::vector<long> operations) {
    long balance = 0;
    for (auto op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}


### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean belowZero(ArrayList<Long> operations) {
        long balance = 0;
        for (long op : operations) {
            balance += op;
            if (balance < 0) {
                return true;
            }
        }
        return false;
    }
    

}

