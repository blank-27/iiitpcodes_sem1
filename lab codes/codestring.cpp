#include <iostream>


int main() {
    unsigned int x;
 unsigned int y;
 double b;
    std::cin>>x;
    std::cin>>y;
    if(x%5==0 && x<=y)
    {
        
         b=(double)(y-x-0.50);
        
        std::cout.unsetf ( std::ios::floatfield );                // floatfield not set
  std::cout.precision(4);
        std::cout<<b;
    }
    else
    {   b=y;
        std::cout<<b;
    }
    
	
	return 0;
}
