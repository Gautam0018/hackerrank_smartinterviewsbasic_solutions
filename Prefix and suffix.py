def longestPrefixSuffix(s) : 
    n = len(s)     
    for x in range(n // 2, 0, -1) : 
        prefix = s[0: x] 
        suffix = s[n - x: n]
        if (prefix == suffix) : 
            return x  
    return 0    
s = str(input())
print(longestPrefixSuffix(s))
