#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int rows,queries,no_of_elements_in_subarray;
    cin>>rows>>queries;

    vector<int> main_arr[rows];
    
    for(int i=0;i<rows;i++){
        cin>> no_of_elements_in_subarray;
        int value;
        for(int j=0;j<no_of_elements_in_subarray;j++){
            cin>>value;
            main_arr[i].push_back(value);
        }
    }
    
    int index1,index2;
    
    for(int k=1;k<=queries;k++){
        cin>>index1>>index2;

        cout<<main_arr[index1][index2]<<endl;
    }
    return 0;
}
