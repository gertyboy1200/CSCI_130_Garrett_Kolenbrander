import os

t = input()
t = int(t)
while t > 0:

    date = input()
    day, month = date.split()
    day = int(day)
    print(day, month)
    if ((month == 'Jan' and day >= 21) or (month == 'Feb' and day <= 19)):
        print("aquarius")

    t = t -1