#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long largest_divisor(long n) {
    for(long i=n-1;i>=1;i--) {
        if(n%i==0) {
            return i;
        }
    }
}
