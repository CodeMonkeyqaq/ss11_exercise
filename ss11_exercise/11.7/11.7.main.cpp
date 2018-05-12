

//
//  11.7.main.cpp
//  ss11_exercise
//
//  Created by 王星洲 on 2018/4/18.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#include "11.7.hpp"
#include <iostream>
using namespace std;
int main()
{
    complex a(3.0,4.0);
    complex c;
    cout<<"Enter a complex number (q to quit):\n";
    while (cin>>c)
    {
        cout<<"c is "<< c <<endl;
        cout<< "complex conjugate is "<<~c <<endl;
        cout<< "a is "<< a <<endl;
        cout<< "a + c is "<< a + c <<endl;
        cout<< "a - c is "<< a - c <<endl;
        cout<< "a * c is "<< a * c <<endl;
        cout<< "2 * c is "<< 2 * c <<endl;
        cout<< "Enter a complex number (q to quit):\n";
    }
    cout<<"Done!\n";
    return 0;
}
