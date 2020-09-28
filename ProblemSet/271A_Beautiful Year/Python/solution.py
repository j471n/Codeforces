# Date : 28-Sep-2020 By Jatin Sharma

def solve(year):
    while(True):
        year = str(int(year)+1)
        if(len(set(year))==4):
            return year


if __name__ == "__main__":
    print(solve(input()))