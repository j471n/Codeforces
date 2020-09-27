


def solve(n, t, s):
    
    for _ in range(0, t):

        i = 0
        while i < n-1:

            if s[i] == 'B' and s[i+1] == 'G':
                s[i] = 'G'
                s[i+1] = 'B'
                i += 2
            else:
                i += 1

    return "".join(s)


if __name__ == "__main__":

    n, t = map(int, input().split(" "))
    s = input()
    print(solve(n, t, list(s)))