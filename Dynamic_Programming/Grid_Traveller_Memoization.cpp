#include <iostream>
#include <climits>
using namespace std;

int gridTraveller(int n, int m, int dp[][1000])
{
	//if(dp[n][m]!=0)
		//return dp[n][m];
	if(n==1 || m==1)
		return dp[n][m] = 1;
	dp[n][m] = gridTraveller(n-1, m, dp) + gridTraveller(n, m-1, dp);
	return dp[n][m];
}

int main()
{
	int n, m;
	cout << "\nEnter grid dimensions\n";
	cin>>n>>m;
	int dp[1000][1000] = {{0}};
	cout << "\nThe no of paths available to grid traveller to reach from top row 1st cell to last row last cell\n";
	cout << gridTraveller(n, m, dp) <<"\n\n";
}
