//
//  main.cpp
//  Pi
//
//  Created by Aziz Mohammed  on 2/11/23.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double sinfun(double x)
{
    return sin(x);
}

double error_calc(double LB, double RB)
{
    double e = 0.5*abs(RB-LB);
    return e;
}
 
double bisect_root(double LB, double RB, double (*func)(double), double max_error, int num_its)
{
    int num_executions = 0;
    for(int i = 0; i < num_its; i++)
    {
        num_executions ++;
        double mid = 0.5*(LB+RB);
        // cout << setprecision(16) << LB << " " << mid << " " << " " << RB << "\n" << endl;
        if(func(LB)*func(mid) < 0)
        {
            RB = mid;
        }
        if(func(mid)*func(RB) < 0)
        {
            LB = mid;
        }
        if(error_calc(LB, RB) < max_error)
        {
            cout << num_executions << endl;
            cout << M_PI << endl;
            return 0.5*(LB+RB);
        }
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    cout << setprecision(16) << bisect_root(3, 4, &sin, 10e-13, 100) <<endl;
    return 0;
}
