#pragma once

#include <iostream>
#include "fstream"
#include <string>
using namespace std;
 class Base
{
protected: 
    string pin;
    string number;
    string sum;
public:
    string sum1()
    {
        return sum;
    }
     int search(string a, string b)
     {
         ifstream in;
         in.open("C:\\Users\\user\\source\\repos\\Bankomat328\\Bankomat328\\base1");
         try
         {
             if (!in) throw 1;
         }
         catch (int)
         {
             cout << "\nFILE IS NOT OPEN!!!\n";
             exit(1);
         }
         while (in)
         {
             getline(in,number);
             getline(in,pin);
             getline(in, sum);
             if (number == a && pin == b)
             {
                 in.close();
                 return 33;
             }
         }
         in.close();
         return 0;
     }
     void write()
     {
         ofstream out;
         out.open("C:\\Users\\user\\source\\repos\\Bankomat328\\Bankomat328\\base2");
         try
         {
             if (!out) throw 1;
         }
         catch (int)
         {
             cout << "\nFILE IS NOT OPEN!!!\n";
             return ;
         }
         out << number << endl;
         out << pin << endl;
         out << sum << endl;
         out.close();
     }
     void write_base()
     {
         Base a;
         ofstream out;
         out.open("C:\\Users\\user\\source\\repos\\Bankomat328\\Bankomat328\\base3");
         try
         {
             if (!out) throw 1;
         }
         catch (int)
         {
             cout << "\nFILE IS NOT OPEN!!!\n";
             return;
         }
         ifstream in;
         in.open("C:\\Users\\user\\source\\repos\\Bankomat328\\Bankomat328\\base1");
         try
         {
             if (!in) throw 1;
         }
         catch (int)
         {
             cout << "\nFILE IS NOT OPEN!!!\n";
             exit(1);
         }
         while (in)
         {
             getline(in, a.number);
             getline(in, a.pin);
             getline(in, a.sum);
             if(a.number == number && in)
             { 
                 out << number << endl;
                 out << pin << endl;
                 out << sum << endl;
             }
             else if(in)
             {
                 out << a.number << endl;
                 out << a.pin << endl;
                 out << a.sum << endl;
             }
         }
         in.close();
         out.close();
         ofstream out1;
         out1.open("C:\\Users\\user\\source\\repos\\Bankomat328\\Bankomat328\\base1");
         try
         {
             if (!out) throw 1;
         }
         catch (int)
         {
             cout << "\nFILE IS NOT OPEN!!!\n";
             return;
         }
         ifstream in1;
         in1.open("C:\\Users\\user\\source\\repos\\Bankomat328\\Bankomat328\\base3");
         try
         {
             if (!in1) throw 1;
         }
         catch (int)
         {
             cout << "\nFILE IS NOT OPEN!!!\n";
             exit(1);
         }
         while (in1)
         {
             getline(in1, a.number);
             getline(in1, a.pin);
             getline(in1, a.sum);
             if (in1)
             {
                 out1 << a.number << endl;
                 out1 << a.pin << endl;
                 out1 << a.sum << endl;
             }
            
         }
         in1.close();
         out1.close();
     }
     void read()
     {
         ifstream in;
         in.open("C:\\Users\\user\\source\\repos\\Bankomat328\\Bankomat328\\base2");
         try
         {
             if (!in) throw 1;
         }
         catch (int)
         {
             cout << "\nFILE IS NOT OPEN!!!\n";
             exit(1);
         }
         getline(in, number);
         getline(in, pin);
         getline(in, sum);
         in.close();
     }
     int  debiting(int nubmer)
     {
         int sum_int = stoi(sum);
         int temp = sum_int - nubmer;
         if(temp<0)
             return -33;
         sum_int = sum_int - nubmer;
         sum = to_string(sum_int);
         return 0;
     }
     void sumx(string sum1)
     {
         int sum_int1 = stoi(sum1);
         int sum_int2 = stoi(sum);
         int sum_int = sum_int1 + sum_int2;
         sum = to_string(sum_int);
     }
     int  debiting1(string sum1)
     {
         int number=0;
         number= stoi(sum1);
         int sum_int = stoi(sum);
         int temp = sum_int - number;
         if (temp < 0)
             return -33;
         sum_int = sum_int - number;
         sum = to_string(sum_int);
         return 0;
     }
};

