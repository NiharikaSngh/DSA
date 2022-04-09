#include <iostream>
#include <map>
#include <string>
using namespace std;

int gridTraveller(int n, int m, map<pair<int,int>,int> &mem)
{
	const pair<int,int> key = {m,n};
	auto it = mem.find(key);
	if(it!=mem.end())
		return mem[key];
	if(n==1 && m==1)
		return 1;
	if(n==0 || m==0)
		return 0;
	mem[key] = gridTraveller(n-1, m, mem) + gridTraveller(n, m-1, mem);
	return mem[key];
}

int main()
{
	int n, m;
	cout << "\nEnter grid size\n";
	cin >> n >> m;
	map<pair<int,int>,int> mem;
	cout << "\nThe no of (distinct) paths available for the traveller\n";
	cout << gridTraveller(n, m, mem) << "\n\n";
	return 0;
}
