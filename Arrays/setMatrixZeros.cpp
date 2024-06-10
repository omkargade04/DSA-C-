#include <bits/stdc++.h>
using namespace std;

// void setZeroes(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();

//     vector<vector<int>> mat = matrix;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 for (int k = 0; k < m; k++)
//                 {
//                     mat[i][k] = 0;
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 for (int k = 0; k < n; k++)
//                 {
//                     mat[k][j] = 0;
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             matrix[i][j] = mat[i][j];
//         }
//     }
// }

//striver's solution

// void setZeroes(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();

//     int col[m] = {0};
//     int row[n] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {

//             if (col[j] == 1 || row[i] == 1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }

void setZeroes(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    // int col[m] = {0}; -> matrix[0][..]
    // int row[n] = {0}; -> matrix[..][0]

    int col0 = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                // make the i-th row 0
                matrix[i][0] = 0;
                // make the j-th col 0
                if(j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j] != 0){
                //check for col and row
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int j=0;j<m;j++){
            matrix[0][j] = 0;
        }
    }
    if(col0 == 0){
        for(int i=0;i<n;i++){
            matrix[i][0] = 0;
        }
    }
}

int main()
{

    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    setZeroes(v);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}