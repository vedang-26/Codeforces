def main():
    T = int(input())
    
    for _ in range(T):
        s = list(input())
        t = input()
        
        slen = len(s)
        tlen = len(t)
        j = 0
        
        possible = True
        for i in range(slen):
            if j < tlen and s[i] == t[j]:
                j += 1
            elif s[i] == '?':
                if j < tlen:
                    s[i] = t[j]
                    j += 1
                else:
                    s[i] = 'a'
        
        if j < tlen:
            print("NO")
        else:
            print("YES")
            print(''.join(s))

if __name__ == "__main__":
    main()