////
////  11.5.cpp
////  ss11_exercise
////
////  Created by 王星洲 on 2018/4/18.
////  Copyright © 2018年 王星洲. All rights reserved.
////
//
//#include "11.5.hpp"
//#include <iostream>
//using namespace std;
//CStonewt::CStonewt(double lbs)
//{
//    m_stone = int (lbs) / Lbs_per_stn;
//    m_pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
//    m_pounds = lbs;
//    m_status = doublePounds;
//}
//CStonewt::CStonewt(int stn, double lbs)
//{
//    m_stone = stn;
//    m_pds_left = lbs;
//    m_pounds = stn * Lbs_per_stn + lbs;
//    m_status = stone;
//}
//CStonewt::CStonewt()
//{
//    m_stone = m_pounds = m_pds_left = 0;
//    m_status = stone;
//}
//CStonewt::~CStonewt()
//{
//}
//void CStonewt::changeStatus(int st)
//{
//    if (st == 0)
//    {
//        m_status = stone;
//    }
//    else if (st == 1)
//    {
//        m_status = doublePounds;
//    }
//    else if (st == 2)
//    {
//        m_status = intPounds;
//    }
//    else
//    {
//        m_status = stone;
//        cout<<"Error!";
//    }
//}
//CStonewt CStonewt::operator +(const CStonewt & a) const
//{
//    CStonewt newStone(m_stone + a.m_stone,m_pds_left + a.m_pds_left);
//    return newStone;
//}
//CStonewt CStonewt::operator-(const CStonewt & a)const
//{
//    CStonewt newStone(m_pounds - a.m_pounds);
//    return newStone;
//}
//CStonewt CStonewt::operator*(double n) const
//{
//    CStonewt newStone(m_pounds * n);
//    return newStone;
//}
//ostream & operator <<(ostream & os,const CStonewt & stonewt)
//{
//    if(stonewt.m_status == CStonewt::stone)
//    {
//        os << stonewt.m_stone << " stone " << stonewt.m_pds_left << " pounds";
//    }
//    else if(stonewt.m_status == CStonewt::doublePounds)
//    {
//        os << stonewt.m_pounds << " pounds";
//    }
//    else if(stonewt.m_status == CStonewt::intPounds)
//    {
//        os << int(stonewt.m_pounds + 0.5) << " pounds";
//    }
//    else
//    {
//        os << "Error!";
//    }
//    return os;
//}
//bool operator ==(const CStonewt & a, const CStonewt & b)
//{
//    if(a.m_pounds == b.m_pounds)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//bool operator !=(const CStonewt & a, const CStonewt & b)
//{
//    if(a.m_pounds != b.m_pounds)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//bool operator >(const CStonewt & a, const CStonewt & b)
//{
//    if(a.m_pounds > b.m_pounds)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//bool operator <(const CStonewt & a, const CStonewt & b)
//{
//    if(a.m_pounds < b.m_pounds)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//bool operator >=(const CStonewt & a, const CStonewt & b)
//{
//    if(a.m_pounds >= b.m_pounds)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//bool operator <=(const CStonewt & a, const CStonewt & b)
//{
//    if(a.m_pounds <= b.m_pounds)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
