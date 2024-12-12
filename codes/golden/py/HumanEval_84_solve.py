def solve(N: int) -> str:
    return bin(sum(int(i) for i in str(N)))[2:]