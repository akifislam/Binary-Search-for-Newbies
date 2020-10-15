
#include <bits/stdc++.h>
int n,arr[1000];
using namespace std;


int binary_search (int desired_value) {

    int start = 0, end = n-1, mid;

    while(start<=end) {
        mid = start +(end - start)/2;

        if(arr[mid] == desired_value) return mid+1;

        else if(arr[mid]<desired_value) start = mid+1;

        else end = mid-1;

    }
    return -1;
}

int main() {
//    freopen("input.txt", "r", stdin);
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int desired_value;
    cin>>desired_value;

    int found_at_index = binary_search(desired_value);
    
    cout<<"Found at : "<<found_at_index<<endl;


}
