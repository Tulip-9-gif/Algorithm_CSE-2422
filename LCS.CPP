#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    cout<<"enter 1st string: ";
    cin>>x;
    cout<<"enter 2nd string: ";
    cin>>y;

    int m=x.size();
    int n=y.size();

    vector<vector<int>> dp(m+1,vector<int>(n+1));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1])
                {dp[i][j]=dp[i-1][j-1]+1;}
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

        }
    }
    cout<<"|nlength of LCS: "<<dp[m][n]<<endl;

    string lcs= " ";
    int i=m,j=n;
    while(i>0&&j>0){
        if(x[i-1]==y[j-1]){
            lcs=x[i-1]+lcs;
            i--; j--;
        }
        else if (dp[i-1][j]>dp[i][j-1])
            i--;
        else j--;
    }
    cout<<"LCS: "<<lcs<<endl;
    return 0;
}
