/*
 * Problem Source : https://codeforces.com/contest/600/submission/95627026
 * Suppose an array is [1,3,5,7,9]
 * If I search upper_bound(6), I will get back the iterator of 7
 * Now, if I want to know how many numbers are less than 6 in the array, then I can subtract iterator from iterator.
 * Example : upper_bound(7)-A will return iterator(7)-iterator(1) which is equals 3
 */

#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    os << '[';
    for (const auto &x : v) os << " " << x;
    return os << ']';
}
long long int A[2*100000+1], B[2*100000+1];
int size_of_a, size_of_b;



int main() {
    FastIO
    //freopen("input.txt", "r", stdin);

    cin >> size_of_a >> size_of_b;


    //Array A Input
    for (int i = 0; i < size_of_a; i++) {
        cin >> A[i];
    }

    //B Input
    for (int i = 0; i < size_of_b; i++) {
        cin >> B[i];
    }

    //Input Done
    sort(A, A + size_of_a);


    for (int i = 0; i < size_of_b ; i++) {
        cout<<upper_bound(A,A+size_of_a,B[i])-A <<" ";
    }


}
