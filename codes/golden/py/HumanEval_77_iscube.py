def iscube(a: int) -> bool:
    a = abs(a)
    return int(round(a ** (1. / 3))) ** 3 == a