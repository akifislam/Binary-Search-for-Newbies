/* Subject : Upper Bound
 * Note : It return an iterator, not an index. Iterator means the pointer of the value.
 * Suppose, I want to find 'x' in a range of [0:n] index. Upper bound returns an iterator which is greater than to x.
 * Suppose an array = [1,2,5,6,7,10]
 * Equal Case : If I search for 7, it will return the iterator/value of 10
 * Greater Than Case : But If I search for 8 (which is not in the list), it will return the iterator of 10
 * Not Present Case : If search for 72 in an array = [1,2,5,6,7,10], it will return 0
 */

#include <bits/stdc++.h>
int n,arr[1000];
using namespace std;


int upper_bound_algorithm (int desired_value) {
    int start = 0, end = n-1, mid;
    while(start<end) {
        mid = start + (end-start)/2;

        if(desired_value<arr[mid]) end = mid;
        else start = mid+1;
    }
    return arr[start];
}


int main() {
    freopen("input.txt", "r", stdin);
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int desired_value;
    cin>>desired_value;

    cout<<"STL Upper Bound :"<<*upper_bound(arr,arr+n,desired_value)<<endl;
    cout<<"Akif's Implemntation upper Bound : "<<upper_bound_algorithm(desired_value)<<endl;


}
