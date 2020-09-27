def solve(name1, name2):
    
    len1 = len(name1)
    len2 = len(name2)

    if(len1!=len2):
        return "NO"

    for i in range(0,len1):
        if(name1[i]!=name2[len1-i-1]):
            return "NO"

    return "YES"



if __name__ == "__main__":
    name1 = input()
    name2 = input()
    print(solve(name1,name2))