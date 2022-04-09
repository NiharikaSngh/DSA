#include <iostream>
#include <climits>
#include <string>
#define INF -1
using namespace std;

int main()
{
	int NODE;
	cin>>NODE;
	int costMat[NODE][NODE];
	for(int i=0; i<NODE; i++)
	{
		for(int j=0; j<NODE; j++)
		{
			cin >> costMat[i][j];
		}
	}
	for(int k=0; k<NODE; k++)
	{
		for(int i=0; i<NODE; i++)
		{
			for(int j=0; j<NODE; j++){
				if(i==j || j==k || i==k || costMat[i][k]==INF || costMat[k][j]==INF)
					continue;
				if(costMat[i][j]==INF)
					costMat[i][j] = costMat[i][k] + costMat[k][j];
				else
					costMat[i][j] = min(costMat[i][j],costMat[i][k] + costMat[k][j]);
			}
		}
	}
	cout << "\n";
	for(int i=0; i<NODE; i++){
		for(int j=0; j<NODE; j++){
			cout << costMat[i][j] << " ";
		}
		cout << "\n";	
	}

	return 0;
}
	


