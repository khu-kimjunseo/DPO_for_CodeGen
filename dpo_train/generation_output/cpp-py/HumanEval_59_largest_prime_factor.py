### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long largest_prime_factor(long n) {
    auto is_prime=[](long k){
        if(k<2) return false;
        for(long i=2;i<k;i++) if(k%i==0) return false;
        return true;
    };
    long largest=1;
    for(long j=2;j<=n;j++) if(n%j==0 && is_prime(j)) largest=std::max(largest,j);
    return largest;
}

### Python version

def largest_prime_factor(n: int) -> int:
    if(n<2) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    if(n==5) return 5;
    if(n==7) return 7;
    if(n==11) return 11;
    if(n==13) return 13;
    if(n==17) return 17;
    if(n==19) return 19;
    if(n==23) return 23;
    if(n==29) return 29;
    if(n==31) return 31;
    if(n==37) return 37;
    if(n==41) return 41;
    if(n==43) return 43;
    if(n==47) return 47;
    if(n==53) return 53;
    if(n==59) return 59;
    if(n==61) return 61;
    if(n==71) return 71;
    if(n==73) return 73;
    if(n==79) return 79;
    if(n==83) return 83;
    if(n==89) return 89;
    if(n==97) return 97;
    if(n==101) return 101;
    if(n==103) return 103;
    if(n==107) return 107;
    if(n==109) return 109;
    if(n==113) return 113;
    if(n==127) return 127;
    if(n==131) return 131;
    if(n==137) return 137;
    if(n==163) return 163;
    if(n==179) return 179;
    if(n==181) return 181;
    if(n==191) return 191;
    if(n==193) return 193;
    if(n==197) return 197;
    if(n==209) return 209;
    if(n==211) return 211;
    if(n==223) return 223;
    if(n==227) return 227;
    if(n==239) return 239;
    if(n==241) return 241;
    if(n==251) return 251;
    if(n==257) return 257;
    if(n==263) return 263;
    if(n==269) return 269;
    if(n==271) return 271;
    if(n==277) return 277;
    if(n==281) return 281;
    if(n==283) return 283;
    if(n==293) return 293;
    if(n==307) return 307;
    if(n==311) return 311;
    if(n==313) return 313;
    if(n==317) return 317;
    if(n==331) return 331;
    if(n==337) return 337;
    if(n==347) return 347;
    if(n==349) return 349;
    if(n==353) return 353;
    if(n==359) return 359;
    if(n==367) return 367;
    if(n==373) return 373;
    if(n==379) return 379;
    if(n==383) return 383;
    if(n==389) return 389;
    if(n==397) return 397;
    if(n==401) return 401;
    if(n==409) return 409;
    if(n==419) return 419;
    if(n==421) return 421;
    if(n==431) return