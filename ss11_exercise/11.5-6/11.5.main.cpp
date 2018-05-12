//
////
////  11.5.main.cpp
////  ss11_exercise
////
////  Created by 王星洲 on 2018/4/18.
////  Copyright © 2018年 王星洲. All rights reserved.
////
//
//#include <iostream>
//#include "11.5.hpp"
//using std::cout;
//int main()
//{
//    CStonewt CIncognito = 275;
//    CStonewt CWolfe (285.7);
//    CStonewt CTaft(21, 8);
//    cout << "The celebroty weighted ";
//    cout << CIncognito << endl;
//    cout << "The detective weighted ";
//    cout << CWolfe << endl;
//    cout << "The President weighted ";
//    cout << CTaft << endl;
//    CIncognito = CIncognito + CWolfe;
//    CTaft = 2.5 * CTaft;
//    CWolfe = CWolfe - CIncognito;
//    cout << "After dinner, the celebrity weighted ";
//    CIncognito.changeStatus(0);
//    CTaft.changeStatus(2);
//    CWolfe.changeStatus(3);
//    cout<<endl;
//    cout << "After dinner, the President weighted ";
//    cout << CIncognito << endl;
//    cout << "The wrestler weighted even more.\n";
//    cout << CTaft << endl;
//    cout << "No stone left unearned.\n";
//    cout<<"______________________________________________\n";
//    CStonewt array[6]{
//        CStonewt(11,3),
//        CStonewt(120.3),
//        CStonewt(144)
//    };
//    for(int i=0;i<3;i++)
//    {
//        int pounds = 0;
//        if(!(cin>>pounds))
//        {
//            cout<<"Wrong! Retry!"<<endl;
//            cin.clear();
//            while(cin.get()!='\n')
//            {
//                cin.get();
//            }
//        }
//        else{
//            array[i + 3] = CStonewt(pounds);
//        }
//    }
//    CStonewt max = array[0];
//    CStonewt min = array[0];
//    int num = 0;
//    for(int i=0;i<6;i++)
//    {
//        if(max < array[i])
//        {
//            max = array[i];
//        }
//        if(min > array[i])
//        {
//            min = array[i];
//        }
//        if(array[i] >= CStonewt(11,0))
//        {
//            num++;
//        }
//    }
//    cout<< max << min << num <<endl;
//    return 0;
//}
