int isEven(int n);
int isOdd(int);

int isOdd(int n) {
    if(n == 0) return 0;
    return isEven(n - 1);
}

int isEven(int n) {
    if(n == 0) return 1;
    return isOdd(n - 1);
}

int main() {
    printf("%d", isOdd(5));
    return 0;
}