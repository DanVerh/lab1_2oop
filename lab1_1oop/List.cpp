//List.cpp

#include "List.hpp"
#include <list>
#include <iostream>

using namespace std;

void List::SetFront(int value){
     mylist.push_front(value);
}

void List::SetBack(int value){
    mylist.push_back(value);
}

void List::Init(int x, int y){
    SetFront(x);
    SetBack(y);
}

void List::Display() const{
  copy(mylist.begin(), mylist.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
}

void List::DisplayFromBack() {
  copy(mylist.rbegin(), mylist.rend(), ostream_iterator<int>(cout, " "));
  cout << endl;
}

void List::Read(){
  int x = 0;
  while(x != -999) {
  cout << "add element to the list (if you have finished type -999): ";
  cin >> x;
  if (x != -999) {
  mylist.push_back(x);
  }
  else break;
  } ;
}

void List::AddElement(int element){
  mylist.push_front(element);
}

void List::RmElement(int element){
  mylist.remove(element);
}

void List::Find(){
  int element;
  cout << "find element: "; cin >> element;
  list<int>::iterator it;
  it = find(mylist.begin(), mylist.end(), element);
  if(it != mylist.end())
    cout << element << " exists in list"<< endl;
  else
    cout << element << " doesn't exist in list"<< endl;
}
