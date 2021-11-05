
import math
import os
import random
import re
import sys

def timeConversion(s):
    if(s[8:]=='AM') & (s[0:2]=='12'):
        am_string=s.replace('12','00')
        return am_string[0:8]
    elif(s[8:]=='AM') & (s[0:2]!='12'):
        return s[0:8]
    
    elif(s[8:]=='PM') & (s[0:2]=='12'):
        return s[0:8]
    elif(s[8:]=='PM') & (s[0:2]!='12'):
        new_int = int(s[0:2])
        new_format = new_int+12
        new_s=s.replace(s[0:2],str(new_format))
        return (new_s[0:8])

if __name__ == '__main__':

    s = input()

    result = timeConversion(s)

    print(result)