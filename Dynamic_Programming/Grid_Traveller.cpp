#include <iostream>
using namespace std;

int gridTraveller(int n, int m)
{
	if(n==0 || m==0)	
		return 0;
	if(n==1 && m==1)
		return 1;
	int ways = gridTraveller(n-1, m) + gridTraveller(n, m-1);
	return ways;
}

int main()
{
	int n, m;
	cout << "\nEnter the grid dimensions\n";
	cin>>n>>m;
	cout << "\nNo of ways to reach the bottom rightmost cell from the top leftmost cell\n"; 
	cout << gridTraveller(n, m) << "\n\n";
}
