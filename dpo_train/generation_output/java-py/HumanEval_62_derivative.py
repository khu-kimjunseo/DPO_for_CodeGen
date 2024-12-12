### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> derivative(ArrayList<Long> xs) {
        return IntStream.range(1, xs.size()).mapToObj(i -> i * xs.get(i)).collect(Collectors.toCollection(ArrayList::new));
    }
}

### Python version

from typing import List

def derivative(xs: List[int]) -> List[int]:
    return IntStream.range(1, xs.size()).mapToObj(i -> i * xs.get(i)).collect(Collectors.toCollection(ArrayList::new));

### Java version

import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.BigDecimal;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.BigDecimal;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.math.RoundingPrecision;
import java.math.BigInteger;
import java.math.RoundingMode;
import java