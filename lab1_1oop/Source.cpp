//Source.cpp

#include <iostream>
#include <list>
#include "List.hpp"

using namespace std;

List makeList(int x, int y){
  List nn;
  nn.Init(x, y);
  return nn;
}

int main(){
  cout << "List a: " << endl;
  List a;
  a.Init(2, 8);
  a.AddElement(3);
  a.AddElement(7);
  a.Display();
  a.RmElement(2);
  a.DisplayFromBack();
  a.Find();
  a.Find();
  cout << endl;
  cout << "List b: " << endl;
  List b;
  b.Read();
  b.Display();
  b.Find();
  
  return 0;
}
