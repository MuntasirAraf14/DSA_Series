#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j];
        }
    }

    int target;
    cin>>target;
    
    int i=0,j=m-1;
    while(i<n && j>=0)
    {
        if(matrix[i][j]==target)
        {
            cout<<"true";
            return 0;
        }
        else if(matrix[i][j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"false";
    return 0;
}