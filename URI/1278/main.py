def maxls(ls):
    max = 0
    max_index = 0
    for i in range(0, len(ls)):
        if len(ls[i]) > max:
            max = len(ls[i])
            max_index = i
    return ls[max_index], len(ls[max_index])


def justify(txt):
    nls = []
    ntxt = ""

    for t in txt:
        t = " ".join(
            list(filter(lambda x: x != "", [q for q in t.split(" ")])))

        nls.append(t)

    max_element, max_size = maxls(nls)

    for i in range(0, len(nls)):
        if nls[i] != max_element:
            nls[i] = (" " * (abs(max_size - len(nls[i])))) + nls[i]

    for i in range(0, len(nls)):
        if i != len(nls) - 1:
            ntxt += nls[i] + "\n"
        else:
            ntxt += nls[i]

    return ntxt + "\n"


while True:
    nl = int(input())
    if nl == 0:
        break

    txt = []
    while nl > 0:
        lin = input()
        txt.append(lin)

        nl = nl - 1

    print(justify(txt), end="")
