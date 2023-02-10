//
//  main.cpp
//  BizzBuzz
//
//  Created by Aziz Mohammed  on 2/6/23.
//

#include <iostream>
#include <vector>

std::vector<std::string> BizzBuzz(int n){
    std::vector<std::string> vec;
    for(int i = 0; i<=n; i++){
        if(i%3 ==0){
            if(i%5 ==0){
                vec.push_back("BizzBuzz");
            }
            else{vec.push_back("Bizz");}
        }
        else if(i%5 ==0){
            vec.push_back("Buzz");
        }
        else{vec.push_back(std::to_string(i));}
    }
    std::cout << vec.at(n) << std::endl;
    return vec;
}


int main(int argc, const char * argv[]) {
    int input;
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> input;
    BizzBuzz(input);
    return 0;
}
