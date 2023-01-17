#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> createTable(int row,int col){
    vector<vector<int>> v(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int x = rand()%100;
            v[i][j] = x;
        }
    }
    return v;
}
vector<vector<int>> columnSort(vector<vector<int>>& v,int index){
    map<int,vector<int>> mp;
    int n = v.size(),m =v[0].size();
    for(int i=0;i<n;i++){
        mp[v[i][index]].push_back(i);
    }
    vector<vector<int>> ans;
    for(auto u:mp){
        for(auto child:u.second){
            ans.push_back(v[child]);
        }
    }
    return ans;
}

signed main(){
    cout<<"Enter the number of rows: ";
    int row;cin>>row;
    cout<<"\nEnter the number of columns: ";
    int col;cin>>col;
    vector<vector<int>> v=createTable(row,col);
    cout<<"\nThe matrix is:\n";
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<v[i][j]<<' ';
      }
      cout<<'\n';
    }
    int index;
    cout<<"\nEnter the index of column based on which need to be sorted: ";
    cin>>index;
    vector<vector<int>> sorted = columnSort(v,index);
    cout<<"\nThe new sorted matrix is:\n";
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<sorted[i][j]<<' ';
      }
      cout<<'\n';
    }
    return 0;
}
