//
//  11.7.cpp
//  ss11_exercise
//
//  Created by 王星洲 on 2018/4/18.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#include "11.7.hpp"
complex complex::operator+(const complex &a)const
{
    return complex(m_shi + a.m_shi, m_xu + a.m_xu);
}
complex complex::operator-(const complex &a)const
{
    return complex(m_shi - a.m_shi, m_xu - a.m_xu);
}
complex complex::operator*(const complex &a)const
{
    return complex(m_shi * a.m_shi - m_xu * a.m_xu, m_shi * a.m_xu + m_xu * a.m_shi);
}
complex complex::operator*(double n)const
{
    return complex(m_shi * n, m_xu * n);
}
complex complex::operator~()const
{
    return complex(m_shi, -m_xu);
}
