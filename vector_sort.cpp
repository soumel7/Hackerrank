#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    long int n,val;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        cin>>val;
        vec.push_back(val);
    } 
    sort(vec.begin(),vec.end());
    for(int k=0;k<n;k++){
        cout<<vec[k]<<" ";
    }
    return 0;
}
