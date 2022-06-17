#include<iostream>
#include<string>
using namespace std ;
int main (){
  char name[1000];
  cin>>name;
  if(name[0]>='a' && name[0]<='z'){
    name[0]=name[0]-32;
  }
  cout<<name<<endl;
  return 0;
}

