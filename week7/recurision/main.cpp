#include <iostream>

using namespace std;

int factIt(int);
int factRec(int);
int fibIt(int);
int fibRec(int);

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << n << "!: " << factRec(n) << endl;
    cout << n << "th fib #: " << fibIt(n) << endl;

    return 0;
}

/*
 *  iterative factorial implementation
 */
int factIt(int n) {

    int result = 1;
//    for (int i=1; i<=n; i++) {
    for (int i=n; i>=1; i--) {
        result *= i;
    }
    return result;

}

int factRec(int n) {

    if ( n <= 1 ) {
        // base case
        return 1;
    } else {
        // recursive case
        return n * factRec(n-1);
    }

}

int fibIt(int n){

    if (n <= 2) {
        return 1;
    }
    int fibNM1 = 1;
    int fibNM2 = 1;
    int fib = fibNM1 + fibNM2;
    for (int i=3; i<=n; i++) {
        fib = fibNM1 + fibNM2;
        fibNM2 = fibNM1;
        fibNM1 = fib;
    }
    return fib;
}

int fibRec(int n){

//    if (n == 1 || n == 2) {
    if (n <= 2) {
        // BASE CASE
        return 1;
    } else {
        // RECURSIVE CASE
        return fibRec(n-1) + fibRec(n-2);
    }

}

