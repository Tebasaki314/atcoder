def sub_group(A):
    """
    リストAの部分集合を求める
    """
    ret = []
    for i in range(1 << len(A)):
        output = []
        for j in range(len(A)):
            if ((i >> j) & 1) == 1:
                output.append(A[j])
        if output != []:
            ret.append(output)
    return ret
