while True:
    try:  # EOF(End Of File)_입력이 끝날 때까지 출력
        a, b, c = map(int, input().split())
        print(max(b-a-1, c-b-1))
    except:
        break

# 3 5 9
# 3~5와 5~9중 넓은 쪽으로 점프
