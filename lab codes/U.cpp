#include<bits/stdc++.h>
int main()
{   int x,z;
    int arr[108];
     std::string st[12]={"WS","MS","AS","AS","MS","WS","WS","MS","AS","AS","MS","WS"};
     for(int i=1;i<=108;i++)
    { arr[i-1]=i;
    }
 std::cin>>z;
 for(int y=1;y<=z;y++) 
 {
 
    std::cin>>x;
   
 if(1<=x&&x<=12)
        {std::cout<<arr[12-x]<<st[x-1];}
 else if(13<=x&&x<=24)
        {std::cout<<arr[24-x+12]<<" "<<st[x-13]<<std::endl;}
 else if(25<=x&&x<=36)
        {std::cout<<arr[36-x+24]<<" "<<st[x-25]<<std::endl;}
 else if(37<=x&&x<=48)
        {std::cout<<arr[48-x+36]<<" "<<st[x-37]<<std::endl;}
 else if(49<=x&&x<=60)
        {std::cout<<arr[60-x+48]<<" "<<st[x-49]<<std::endl;}
 else if(61<=x&&x<=72)
        {std::cout<<arr[72-x+60]<<" "<<st[x-61]<<std::endl;}
 else if(73<=x&&x<=84)
        {std::cout<<arr[84-x+72]<<" "<<st[x-73]<<std::endl;}
 else if(85<=x&&x<=96)
        {std::cout<<arr[96-x+84]<<" "<<st[x-85]<<std::endl;}
 else //(97<=x&&x<=108)
        {std::cout<<arr[108-x+96]<<" "<<st[x-97]<<std::endl;}
 /*for(int i=0;i<108;i++)
 {std::cout<<arr[i];}*/
 }
       
        return 0;
}