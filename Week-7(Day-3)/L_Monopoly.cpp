#include <iostream>
using namespace std;

int main() {
	
	int t;
	std::cin >> t;
	while(t--)
	{
	    int p,q,r,s;
	    std::cin >> p>>q>>r>>s;
	    
	    if(p>q+r+s||q>p+r+s ||r>p+q+s ||s>p+q+r)    std::cout << "YES" << std::endl;
	    else std::cout << "NO" << std::endl;
	}
	return 0;
}