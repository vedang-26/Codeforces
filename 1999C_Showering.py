def process_game():
    n, distance, end_point = map(int, input().split())
    segments = []
    for _ in range(n):
        start, finish = map(int, input().split())
        segments.append((start, finish))
    segments.sort()

    initial_start = segments[0][0]
    if initial_start >= distance:
        print("YES")
        return
    current_end = segments[0][1]  
    for i in range(1,n):
        if segments[i][0] > current_end:
            if segments[i][0] - current_end >= distance:
                print("YES")
                return
        current_end = max(current_end, segments[i][1])
    
    if end_point - current_end >= distance:
        print("YES")
        return
    
    print("NO")

def main():
    test_cases = int(input())
    for _ in range(test_cases):
        process_game()

if __name__ == "__main__":
    main()
