//
//  main.cpp
//  Rect_Trap_Integral_PS1
//  I had planned to incorporate a method for the user to pass functions but I kept running into bugs I couldn't fix. I'll keep working on it going forward.
//  Created by Aziz Mohammed  on 2/5/23.
//

#include <iostream>
#include <cmath>

using namespace std;

double sine(double x)
{
    return sin(x);
}

double cosine(double x)
{
    return cos(x);
}

double RectRuleSin(double xmin, double xmax, int N)
{
    double dx = (xmax-xmin)/N;
    double integral = 0;
    for(int i=0; i<N; i++)
    {
        integral +=sin(i*dx)*dx;
    }
    return integral;
}

double TrapRuleSin(double xmin, double xmax, int N){
    double dx = (xmax-xmin)/N;
    double integral = 0;
    for(int i=0; i<N; i++)
    {
        integral += 0.5*(sin(i*dx) + sin(i*dx + dx))*dx;
    }
    return integral;
}
int main(int argc, const char * argv[]) {
    double pi = 3.1416926;
    
    //cout << "The irrational number pi is saved as a double called pi" << endl;
    //cout << "When entering a function, use its full name prepended by &. For example, sin should be entered as sine." << endl;
   // cout << "Enter a function as &func: " << endl;
    //cin >>  >> endl;
    
    cout << 1 - RectRuleSin(0, pi/2, 100) << endl;
    cout << 1 - RectRuleSin(0, pi/2, 1000) << endl;
    cout << 1 - TrapRuleSin(0, pi/2, 100) << endl;
    cout << 1 - TrapRuleSin(0, pi/2, 1000) << endl; // something weird is happening here where the error only decreases by a factor of two rather than 100.
    cout << 2-TrapRuleSin(0, pi, 100) << endl;
    cout << 2-TrapRuleSin(0, pi, 1000) << endl;
    return 0;
}
