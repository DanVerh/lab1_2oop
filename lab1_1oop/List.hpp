//List.hpp

#pragma once
#include <list>

using namespace std;

class List{
private:
  /*int *front, *back;*/
  list <int> mylist;
public:
  int GetFront() const { return mylist.front(); };
  int GetBack() const { return mylist.back(); };
  void SetFront(int value);
  void SetBack(int value);

  void Init(int x, int y);
  void Display() const;
  void DisplayFromBack();
  void Read();

  void AddElement(int element);
  void RmElement(int element);
  void Find();
};
