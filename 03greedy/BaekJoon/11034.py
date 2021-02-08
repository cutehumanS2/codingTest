while True:
    try:  # EOF(End Of File)_입력이 끝날 때까지 출력
        a, b, c = map(int, input().split())
        print(max(b-a-1, c-b-1))
    except:
        break
