//
//  11.7.hpp
//  ss11_exercise
//
//  Created by 王星洲 on 2018/4/18.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#ifndef _1_7_hpp
#define _1_7_hpp
#include <iostream>
using namespace std;
class complex
{
private:
    double m_shi;
    double m_xu;
public:
    complex(double a, double b){m_shi = a;m_xu = b;}
    complex(){m_xu = m_shi = 0;}
    ~complex(){}
    complex operator +(const complex & a)const;
    complex operator -(const complex & a)const;
    complex operator *(const complex & a)const;
    complex operator *(double n)const;
    friend complex operator *(double n, const complex & a){return a * n;}
    complex operator ~()const;
    friend ostream & operator <<(ostream & os,const complex & a){os<<"( "<<a.m_shi<<" + "<<a.m_xu<<" i )";
        return os;
    }
    friend istream & operator >>(istream & is, complex & a)
    {
        is>>a.m_shi>>a.m_xu;
        return is;
    }
};


#endif /* _1_7_hpp */
