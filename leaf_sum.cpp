#include <stdio.h>
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;
#define MAX 100000
long long n,m,x,y,X;
vector<int> graph[MAX];
int arr[MAX];
long ans=0;

void dfs(int node,int val){
    if(graph[node].size()==0 & val>=X){
        ans++;
    }
    for(int k=0;k<graph[node].size();k++){
        dfs(graph[node][k],val+arr[graph[node][k]]);
    }
}

int main(){
    cin>>X;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<m;j++){
        scanf("%lld %lld",&x,&y);
        graph[x].push_back(y);
    }


    dfs(1,arr[1]);
    cout<<ans;



    return 0;
}