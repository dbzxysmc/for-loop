# Test on different orders of "for" loop

## Orders:
1. Order 1, for each i, access arr[i][0], arr[i][1], ... arr[i][n2 - 1].
2. Order 2, for each j, access arr[0][j], arr[1][j], ... arr[n1 - 1][j].

## Results:
1. Compile with "-O1" option,

```
writing time of order 1 = 172119
reading time of order 1 = 34695
writing time of order 2 = 927809
reading time of order 2 = 34379
```

2. Compile with "-O2" option,

```
writing time of order 1 = 182341
reading time of order 1 = 1
writing time of order 2 = 966578
reading time of order 2 = 1
```

3. Compile with no "-O" options,
```
writing time of order 1 = 402042
reading time of order 1 = 374975
writing time of order 2 = 1867287
reading time of order 2 = 1104188
```
