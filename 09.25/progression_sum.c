// Calculates the sum of the members of the geometric progression from 1 to x^4
int geom_sum_4(int x) {
    int xx = x * x;
    return (xx + x) * (xx + 1) + 1;
}
