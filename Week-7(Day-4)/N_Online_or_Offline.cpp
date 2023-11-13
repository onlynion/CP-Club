#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	    float N , M , net_online;
	    cin >> N >> M;
	    net_online = (N - (N*0.1));
	    
	    if(net_online < M)
	    {
	        cout << "ONLINE" << endl;
	    }
	    else if(net_online == M)
	    {
	        cout << "EITHER" << endl;
	    }
	    else if ( net_online > M)
	    {
	        cout << "DINING" << endl;
	    }
	    
	}
	return 0;
}