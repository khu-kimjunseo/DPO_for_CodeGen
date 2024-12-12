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


### Python version

from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0

    for op in operations:
        balance += op
        if balance < 0:
            return True

    return False
