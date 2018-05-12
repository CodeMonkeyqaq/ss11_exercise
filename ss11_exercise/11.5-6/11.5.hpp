////
////  11.5.hpp
////  ss11_exercise
////
////  Created by 王星洲 on 2018/4/18.
////  Copyright © 2018年 王星洲. All rights reserved.
////
//
//#ifndef _1_5_hpp
//#define _1_5_hpp
//#include <iostream>
//using namespace std;
//
//class CStonewt
//{
//private:
//    enum {Lbs_per_stn = 14};
//    enum Status {stone = 0, intPounds = 1, doublePounds = 2};
//    int m_stone;
//    double m_pds_left;
//    double m_pounds;
//    Status m_status;
//public:
//    CStonewt(double lbs);
//    CStonewt(int stone, double lbs);
//    CStonewt();
//    ~CStonewt();
//    void changeStatus(int);
//    CStonewt operator +(const CStonewt &) const;
//    CStonewt operator -(const CStonewt &) const;
//    CStonewt operator *(double n) const;
//    friend CStonewt operator *(double n, const CStonewt & t){return t * n;}
//    friend ostream & operator <<(ostream & os, const CStonewt & stonewt);
//    friend bool operator ==(const CStonewt &, const CStonewt &);
//    friend bool operator !=(const CStonewt &, const CStonewt &);
//    friend bool operator >(const CStonewt &, const CStonewt &);
//    friend bool operator <(const CStonewt &, const CStonewt &);
//    friend bool operator >=(const CStonewt &, const CStonewt &);
//    friend bool operator <=(const CStonewt &, const CStonewt &);
//};
//
//#endif /* _1_5_hpp */
