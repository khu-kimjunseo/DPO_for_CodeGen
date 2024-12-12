def right_angle_triangle(a: int, b: int, c: int) -> bool:
    return a*a == b*b + c*c or b*b == a*a + c*c or c*c == a*a + b*b