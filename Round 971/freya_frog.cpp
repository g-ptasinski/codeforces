#include <iostream>
#include <climits>
#include <algorithm> 
#include <vector>
 
int main(int argc, char *argv[])
{
    int t = 0;
    int x,y,k;

    std::cin>>t; 

    while(t--)
    {
        std::cin>>x>>y>>k;
        int jumps = 0;
        int xjumps = x/k;
        int yjumps = y/k;

        if(x%k != 0){xjumps++;}
        if(y%k != 0){yjumps++;}
        
        if(x>=y){yjumps = xjumps-1;}
        else{xjumps=yjumps;}
        
        jumps=xjumps + yjumps;
        
        std::cout<<std::endl<<jumps;
    }
    
    return 0;
}