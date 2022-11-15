#include<iostream>

int main(int argc, char const *argv[])
{
    std::string buffer;
    std::string str;
    int sum = 0;
    while (std::getline(std::cin, str))
    {
    for (size_t i = 0; i <str.length(); i++)
    {
        if (str[i] == '-'||str[i] =='+'&& isdigit(str[i+1]))
        {
       sum+=std::stoi(str.substr(i,1)) ;
        }
     else if (isdigit(str[i])){
       sum+=std::stoi(str.substr(i,1)) ;

      }   
      }
 std::cout<<sum<<std::endl;
    }
        return 0;
    }
    
  

