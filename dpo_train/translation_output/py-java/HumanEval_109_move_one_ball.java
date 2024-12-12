import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean moveOneBall(ArrayList<Long> arr) {
        if (arr.size()==0) {
            return true;
        }
        int min_value=arr.get(0);
        int min_index=arr.indexOf(min_value);
        int max_index=arr.indexOf(min_value);
        int max_value=arr.get(max_index);
        int max_index_plus1=max_index+1;
        int max_value_plus1=max_value+1;
        int max_index_minus1=max_index-1;
        int max_value_minus1=max_value-1;
        int max_index_plus2=max_index+2;
        int max_value_plus2=max_value+2;
        int max_index_minus2=max_index-2;
        int max_value_minus2=max_value-2;
        int max_index_plus3=max_index+3;
        int max_value_plus3=max_value+3;
        int max_index_minus3=max_index-3;
        int max_value_minus3=max_value-3;
        int max_index_plus4=max_index+4;
        int max_value_plus4=max_value+4;
        int max_index_minus4=max_index-4;
        int max_value_minus4=max_value-4;
        int max_index_plus5=max_index+5;
        int max_value_plus5=max_value+5;
        int max_index_minus5=max_index-5;
        int max_value_minus5=max_value-5;
        int max_index_plus6=max_index+6;
        int max_value_plus6=max_value+6;
        int max_index_minus6=max_index-6;
        int max_value_minus6=max_value-6;
        int max_index_plus7=max_index+7;
        int max_value_plus7=max_value+7;
        int max_index_minus7=max_index-7;
        int max_value_minus7=max_value-7;
        int max_index_plus8=max_index+8;
        int max_value_plus8=max_value+8;
        int max_index_minus8=max_index-8;
        int max_value_minus8=max_value-8;
        int max_index_plus9=max_index+9;
        int max_value_plus9=max_value+9;
        int max_index_minus9=max_index-9;
        int max_value_minus9=max_value-9;
        int max_index_plus10=max_index+10;
        int max_value_plus10=max_value+10;
        int max_index_minus10=max_index-10;
        int max_value_minus10=max_value-10;
        int max_index_plus11=max_index+11;
        int max_value_plus11=max_value+11;
        int max_index_minus11=max_index-11;
        int max_value_minus11=max_value-11;
        int max_index_plus12=max_
    public static void main(String[] args) {
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)4l, (long)5l, (long)1l, (long)2l)))) == (true));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)10l, (long)1l, (long)2l)))) == (true));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)4l, (long)3l, (long)1l, (long)2l)))) == (false));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)4l, (long)1l, (long)2l)))) == (false));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList()))) == (true));
    }

}
