#include <iostream>
#include <climits>
#include <algorithm> 
#include <vector>
 
int main(int argc, char *argv[])
{
    int t = 0;
    int rows;
    std::string row;
    std::cin>>t; 

    while(t--)
    {
        std::cin>>rows;
        std::vector<int> solution;
               

        while(rows--)
        {
            std::cin>>row;     
            int  i = 0;
            
            while(row[i]!='#')
            {
                i++;
            }
            
            solution.push_back(i+1);
        }
        
        std::reverse(solution.begin(), solution.end());
        
        for(auto item : solution)
        {
            std::cout << item;
        }
        std::cout <<std::endl;
    }
}