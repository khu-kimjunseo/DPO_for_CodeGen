### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxFill(ArrayList<ArrayList<Long>> grid, long capacity) {
        return grid.stream().mapToLong(arr -> (long)Math.ceil(arr.stream().mapToLong(x -> x).sum()/(double)capacity)).sum();
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
long max_fill(std::vector<std::vector<long>> grid, long capacity) {
    std::vector<std::vector<long>> tmp;
    std::vector<std::vector<long>> tmp2;
    std::vector<std::vector<long>> tmp3;
    std::vector<std::vector<long>> tmp4;
    std::vector<std::vector<long>> tmp5;
    std::vector<std::vector<long>> tmp6;
    std::vector<std::vector<long>> tmp7;
    std::vector<std::vector<long>> tmp8;
    std::vector<std::vector<long>> tmp9;
    std::vector<std::vector<long>> tmp10;
    std::vector<std::vector<long>> tmp11;
    std::vector<std::vector<long>> tmp12;
    std::vector<std::vector<long>> tmp13;
    std::vector<std::vector<long>> tmp14;
    std::vector<std::vector<long>> tmp15;
    std::vector<std::vector<long>> tmp16;
    std::vector<std::vector<long>> tmp17;
    std::vector<std::vector<long>> tmp18;
    std::vector<std::vector<long>> tmp19;
    std::vector<std::vector<long>> tmp20;
    std::vector<std::vector<long>> tmp21;
    std::vector<std::vector<long>> tmp22;
    std::vector<std::vector<long>> tmp23;
    std::vector<std::vector<long>> tmp24;
    std::vector<std::vector<long>> tmp25;
    std::vector<std::vector<long>> tmp26;
    std::vector<std::vector<long>> tmp27;
    std::vector<std::vector<long>> tmp28;
    std::vector<std::vector<long>> tmp29;
    std::vector<std::vector<long>> tmp30;
    std::vector<std::vector<long>> tmp31;
    std::vector<std::vector<long>> tmp32;
    std::vector<std::vector<long>> tmp33;
    std::vector<std::vector<long>> tmp34;
    std::vector<std::vector<long>> tmp35;
    std::vector<std::vector<long>> tmp36;
    std::vector<std::vector<long>> tmp37;
    std::vector<std::vector<long>> tmp38;
    std::vector<std::vector<long>> tmp39;
    std::vector<std::vector<long>> tmp40;
    std::vector<std::vector<long>> tmp41;
    std::vector<std::vector<long>> tmp42;
    std::vector<std::vector<long>> tmp43;
    std::vector<std::vector<long>> tmp44;
    std::vector<std::vector<long>> tmp45;
    std::vector<std::vector<long>> tmp46;
    std::vector<std::vector<long>> tmp47;
    std::vector<std::vector<long>> tmp48;
    std::vector<std::vector<long>> tmp49;
    std::vector<std::vector<long>> tmp50;
    std::vector<std::vector<long>> tmp51;
    std::vector<std::vector<long>> tmp52;
    std::vector<std::vector<long