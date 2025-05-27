#include<iostream>
#include<string>
using namespace std;

int lcs(string str1, string str2) {
    int size1 = str1.length();
    int size2 = str2.length();

    int dp[size1 + 1][size2 + 1]; 

    for(int i = 0; i<= size1; i++)
        dp[i][0] = 0;
    for(int j = 0; j<= size2; j++)
        dp[0][j] = 0;

    for(int i = 1; i <= size1; i++) {
        for(int j = 1; j <= size2; j++) {
            if(str1[i-1] == str2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return dp[size1][size2];
}

int main() {
    string str1, str2;
    cout<<"Enter string1 : ";
    cin>> str1;
    cout<<"\nEnter string2 : ";
    cin>>str2;

    cout<<"Length of LCS: " <<lcs(str1,str2)<<endl;

    return 0;
}
