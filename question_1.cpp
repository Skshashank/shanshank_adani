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

signed main(){
    cout<<"Enter the number of rows: ";
    int row;cin>>row;
    cout<<"\nEnter the number of columns: ";
    int col;cin>>col;
    vector<vector<int>> v=createTable(row,col);
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<v[i][j]<<' ';
      }
      cout<<'\n';
    }
    return 0;
}
