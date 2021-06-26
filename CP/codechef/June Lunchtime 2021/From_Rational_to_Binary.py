def isPowerOf2(sttr):
 
    len_str = len(sttr)
    sttr=list(sttr)
    num = 0
 
    # if the input is "1" then return 0
    # because 2^k = 1 where k >= 1 and here k = 0
    if (len_str == 1 and sttr[len_str - 1] == '1'):
        return 0
 
    while (len_str != 1 or sttr[len_str - 1] != '1'):
 
        # if the last digit is odd then string is not
        # divisible by 2 hence not a power of two
        # return 0.
        if ((ord(sttr[len_str - 1]) - ord('0')) % 2 == 1):
            return 0
 
        # divide the whole string by 2. i is used to
        # track index in current number. j is used to
        # track index for next iteration.
        j = 0
        for i in range(len_str):
            num = num * 10 + (ord(sttr[i]) - ord('0'))
             
            # if num < 2 then we have to take another digit
            # to the right of A[i] to make it bigger than
            # A[i]. E. g. 214 / 2 --> 107
            if (num < 2):
 
                # if it's not the first index. E.g 214
                # then we have to include 0.
                if (i != 0):
                    sttr[j] = '0'
                    j += 1
 
                # for eg. "124" we will not write 064
                # so if it is the first index just ignore
                continue
 
            sttr[j] = chr((num // 2) + ord('0'))
            j += 1
            num = (num) - (num // 2) * 2
 
        # After every division by 2 the
        # length of string is changed.
        len_str = j
 
    # if the string reaches to 1 then the
    # str is a power of 2.
    return 1

t = int(input())

while(t>0):
    t-=1
    a,b = input().split()
    if(isPowerOf2(b)):
        print("Yes")
    else:
        print("No")