#include<iostream>
using namespace std;
int main()
     {
	 int i;
       for(i=0; i<=3;i++)
	   {
	   int age;
       cout<< " \n enter your age:";
       cin>>age;
       if(age>=18)
       cout<<"you are eligible for voting:";
       else
       cout<<"you are noneligible for voting:";
       cout<<"wait for"<<18-age<<"year(s):";
       }
       return 0;
       }
