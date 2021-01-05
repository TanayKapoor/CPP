#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    long arr[n];
    // Reading input from STDIN
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }	// Writing output to STDOUT
    sort(arr,arr+n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    cout<<sum-arr[n-1]<<" "<<sum-arr[0];
    return 0;
}