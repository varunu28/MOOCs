# Uses python3
def edit_distance(str1, str2):
    len_str1 = len(str1) + 1
    len_str2 = len(str2) + 1

    # Create a distance matrix and write in initial values.
    d = [[x] + [0] * (len_str2 - 1) for x in range(len_str1)]
    d[0] = [x for x in range(len_str2)]

    for i in range(1, len_str1):
        for j in range(1, len_str2):

            # Levenshtein distance calculation.
            if str1[i - 1] == str2[j - 1]:
                d[i][j] = d[i - 1][j - 1]
            else:
                d[i][j] = min(d[i][j - 1], d[i - 1][j], d[i - 1][j - 1]) + 1

    # The last element of the matrix is edit distance metric.
    return d[-1][-1]


if __name__ == "__main__":
    print(edit_distance(input(), input()))
