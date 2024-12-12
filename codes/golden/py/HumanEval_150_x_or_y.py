def x_or_y(n: int, x: int, y: int) -> int:
    if n == 1:
        return y
    for i in range(2, n):
        if n % i == 0:
            return y
            break
    else:
        return x