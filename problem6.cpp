#include <iostream>
using namespace std;
int main()
{ int credits, total_credits=0, num;
float grade, sum=0;
cout<<"Enter number of classes:";
cin>>num;
cout<<"Enter credits for class and your grade\n:";
while(num!=0){
cin>>credits>>grade;
total_credits+=credits;
sum+=float(credits)*grade;
num--;
}
cout<<"Your total GPA is "<<sum/float(total_credits)<<endl;
return 0;
}
