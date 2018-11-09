#ifndef VEHICHLE_H_INCLUDED
#define VEHICHLE_H_INCLUDED

#include <string>
const int MAX_ITEMS = 5;
class FullStack
{
public:
 std::string ErrorMessage() { return "The stack is full"; }
};
class EmptyStack
{
public:
 std::string ErrorMessage() { return "The stack is empty"; }
};
template<class ItemType>
class Vehichle
{
public:
 Vehichle();
 ~Vehichle();
bool IsFull();
bool IsEmpty();
void MakeEmpty();
void Push(ItemType colour, ItemType license);
void Pop();
ItemType Top();
bool licenseCheck(ItemType license);
void lengthIs();
void print();

private:
int top;
ItemType car[MAX_ITEMS][2];
int length;
};




#endif // VEHICHLE_H_INCLUDED
