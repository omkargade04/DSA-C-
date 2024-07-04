/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 

DO NOT allocate another 2D matrix and do the rotation.
*/


#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> transpose(vector<vector<int>>& matrix, int n, int m) {

        vector<vector<int>> transposeMat(n, vector<int>(m));

        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++){
                transposeMat[i][j] = matrix[j][i];
            }
        }

        return transposeMat;
    }

    void rotate(vector<vector<int>>& matrix) {
        int m = matrix[0].size();
        int n = matrix.size();

        vector<vector<int>> transposeMat = transpose(matrix, n, m);

        for(int i=0;i<n;i++){
            reverse(transposeMat[i].begin(), transposeMat[i].end());
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j] = transposeMat[i][j];
            }
        }
        return;
    }

    /*
 * clockwise rotate
 * first reverse up to down, then swap the symmetry 
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/
    // void rotate(vector<vector<int> > &matrix) {
    //     reverse(matrix.begin(), matrix.end());
    //     for (int i = 0; i < matrix.size(); ++i) {
    //         for (int j = i + 1; j < matrix[i].size(); ++j)
    //             swap(matrix[i][j], matrix[j][i]);
    //     }
    // }


int main() {
    int n;cin>>n;
    int m;cin>>m;

    vector<vector<int>> mat (n, vector<int> (m, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int e;cin>>e;
            mat[i][j] = e;
        }
    }
    
    rotate(mat);

    cout << "Rotated array: " << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << mat[i][j] << " ";
        }cout << endl;
    }
    
}