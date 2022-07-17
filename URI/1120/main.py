while True:
    ch, mstr = input().split(" ")
    if ch == "0" and mstr == "0":
        break
    try:
        mstr = mstr.replace(ch, "")
        mstr = str(int(mstr))
        print(mstr)
    except:
        print("0")
