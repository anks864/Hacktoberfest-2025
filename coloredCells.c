long long coloredCells(int n) {
    long long op = 1;
    for (int i=1;i<n;i++) {
        op += i*4;
    }
    return op;
}
