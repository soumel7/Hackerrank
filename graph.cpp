#include <stdio.h>
#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

#define MAX 150000
vector <long long> graph[MAX];
long long n,m,x,y;
int count=0;

long long visited[MAX];

void dfs(int node){
    visited[node]=1;
    count++;

    for(int k=0;k<graph[node].size();k++){
        long long u = graph[node][k];
        if(visited[u]==0){
            dfs(u);
        }
    }
}

int main(){
    
    cin>>n>>m;

    for(int i=0;i<m;i++){
    
        scanf("%lld %lld",&x,&y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int sum=0;
    for(int j=1;j<=n;j++){
        if(visited[j]==0){
            count=0;
            dfs(j);
            sum = sum + (count*(count-1))/2;
            
        }
    }

    if(sum==m){
        printf("YES");
    }else
    {
        printf("NO");
    }

    return 0;
}