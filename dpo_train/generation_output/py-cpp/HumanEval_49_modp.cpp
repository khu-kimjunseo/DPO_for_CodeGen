### Python version

def modp(n: int, p: int) -> int:
    ret = 1
    for i in range(n):
        ret = (2 * ret) % p
    return ret

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
long modp(long n, long p) {
    if(n == 0) return 1;
    if(p == 0) return 0;
    long ret = 1;
    while(n > 0) {
        ret = (ret * p) % n;
        n /= 2;
    }
    return ret;
}

#define mod(x,y) ((x) % (y))

#define modp(x,y) ((x) % (y))

#define modp2(x,y) ((x) % (y))

#define modp3(x,y) ((x) % (y))

#define modp4(x,y) ((x) % (y))

#define modp5(x,y) ((x) % (y))

#define modp6(x,y) ((x) % (y))

#define modp7(x,y) ((x) % (y))

#define modp8(x,y) ((x) % (y))

#define modp9(x,y) ((x) % (y))

#define modp10(x,y) ((x) % (y))

#define modp11(x,y) ((x) % (y))

#define modp12(x,y) ((x) % (y))

#define modp13(x,y) ((x) % (y))

#define modp14(x,y) ((x) % (y))

#define modp15(x,y) ((x) % (y))

#define modp16(x,y) ((x) % (y))

#define modp17(x,y) ((x) % (y))

#define modp18(x,y) ((x) % (y))

#define modp19(x,y) ((x) % (y))

#define modp20(x,y) ((x) % (y))

#define modp21(x,y) ((x) % (y))

#define modp22(x,y) ((x) % (y))

#define modp23(x,y) ((x) % (y))

#define modp24(x,y) ((x) % (y))

#define modp25(x,y) ((x) % (y))

#define modp26(x,y) ((x) % (y))

#define modp27(x,y) ((x) % (y))

#define modp28(x,y) ((x) % (y))

#define modp29(x,y) ((x) % (y))

#define modp30(x,y) ((x) % (y))

#define modp31(x,y) ((x) % (y))

#define modp32(x,y) ((x) % (y))

#define modp33(x,y) ((x) % (y))

#define modp34(x,y) ((x) % (y))

#define modp35(x,y) ((x) % (y))

#define modp36(x,y) ((x) % (y))

#define modp37(x,y) ((x) % (y))

#define modp38(x,y) ((x) % (y))

#define modp39(x,y) ((x) % (y))

#define modp40(x,y) ((x) % (y))

#define modp41(x,y) ((x) % (y))

#define modp42(x,y) ((x) % (y))

#define mod