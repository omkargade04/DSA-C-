#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x,y;
        cin>>x>>y;

        char v[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int countOfX = 0;
        int countOfY = 0;
        vector<int>freq(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int p = v[i][j];
                if(p == 'F'){
                    countOfX++;
                    if(countOfX >= x){
                        freq[i] = 1;
                        break;
                    }
                    if(countOfX == (x-1) && countOfY >= y){
                        freq[i] = 1;
                        break;
                    }
                }
                if(p == 'P'){
                    countOfY++;
                    if(countOfX == (x-1) && countOfY >= y){
                        freq[i] = 1;
                        break;
                    }
                }
            }
            countOfX = 0;
            countOfY = 0;
        }
        for(int i=0;i<n;i++){
            cout<<freq[i];
        }cout<<endl;
    }
}
/*
i = 0
p = v[0][3];
countOfX = 3
countOfY = 0

freq[0] = 1

i = 1
p = v[1][2];
countOfX = 2;
countOfY = 2;

freq[1] = 1;

i = 2
p = v[2][0];
countOfX = 0;
countOfY = 0;

freq[2] = 0;
*/