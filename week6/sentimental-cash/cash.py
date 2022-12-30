# TODO
from cs50 import get_float
# get input
n = get_float("Change owed:")
# if less than 0
while n < 0:
    n = get_float("Change owed:")
# if type str
while type(n) == 'str':
    n = get_float("Change owed:")
# make it vaild
n = n*100
# counter
i = 0
# divide 25
while n >= 25:
    i += 1
    n = n-25
# divide 10
while n >= 10:
    i += 1
    n = n-10
# 5
while n >= 5:
    i += 1
    n = n-5
# divide
while n >= 1:
    i = i+n
    n = 0
print(i)
