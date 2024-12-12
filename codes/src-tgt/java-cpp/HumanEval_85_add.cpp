### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long add(ArrayList<Long> lst) {
        return IntStream.range(1, lst.size()).filter(i -> i % 2 != 0 && lst.get(i) % 2 == 0).mapToLong(i -> lst.get(i)).sum();
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
long add(std::vector<long> lst) {
  long sum = 0;
  for (int i = 1; i < lst.size(); i += 2) {
    if (lst[i] % 2 == 0) {
      sum += lst[i];
    }
  }
  return sum;
}
