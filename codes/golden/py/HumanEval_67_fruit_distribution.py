def fruit_distribution(s: str, n: int) -> int:
    lis = list()
    for i in s.split(' '):
        if i.isdigit():
            lis.append(int(i))
    return n - sum(lis)