//
//  main.cpp
//  SquareRoot
//
//  Created by Aziz Mohammed  on 2/12/23.
//

#include <iostream>
#include <cmath>
#include <iomanip>

double n = 2;

double FA(double x)
{
    return .2*x+.8*n/x;
}

double FB(double x)
{
    return .5*(x+n/x);
}

double FC(double x)
{
    double num = x*(std::pow(x, 2)+3*n);
    double den = 3*std::pow(x,2) + n;
    return num/den;
}

double root_finder(double (*func) (double x), double init_cond, double max_error, int count)
{
    double ME = max_error;
    double x0 = init_cond;
    double x1 = func(x0);
    if(abs(x0-x1)< max_error)
    {
        std::cout << std::setprecision(16) << "Sqrt of n = " << x1 << " +/- " << abs(x0- x1) << " with " << count<< " iterations"<<std::endl;
        return x1;
    }
    else{
        std::cout << std::setprecision(16) << x1 << " +/- " << abs(x0-x1) << std::endl;
        return root_finder(func, x1, ME, (count+1) );
    }
}

int main(int argc, const char * argv[]) {
    root_finder(&FA, 0.1, 1e-12, 1);
    root_finder(&FB, 0.1, 1e-12, 1);
    root_finder(&FC, 0.1, 1e-12, 1);

    return 0;
}
