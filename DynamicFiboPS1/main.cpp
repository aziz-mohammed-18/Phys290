//
//  main.cpp
//  DynamicFiboPS1
//
//  Created by Aziz Mohammed  on 2/5/23.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> FiboVect = {0, 1, 1}; //index 0 is set to 0 for ease of access, it will never be called. in fact, entering 0 will cause the program to crash. I'll add an catch clause to manage that later.

int Fibo(int nth)
{
    for(int i = 3; i<nth; i++)
    {
        int temp = FiboVect.at(i-2)+FiboVect.at(i-1);
        FiboVect.push_back(temp);
        //cout<< FiboVect.at(i) << " ";
    }    return(FiboVect.at(nth-1));
}

int main(int argc, const char * argv[]) {
    //try{
    int input;
    cout << "Enter the desired index of the Fibonacci Sequence: ";
    cin >> input;
    cout << Fibo(input) << "\n";
    
    //catch (exception &e){ cout << "Isnt good" << e.what() << endl; }

    return 0;
}
