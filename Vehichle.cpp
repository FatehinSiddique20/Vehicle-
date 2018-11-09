#include "Vehichle.h"
#include<iostream>
using namespace std;
template<class ItemType>
Vehichle<ItemType>::Vehichle()
{
    top = -1;
    length=0;
}
template<class ItemType>
Vehichle<ItemType>::~Vehichle()
{
    MakeEmpty();
}
template<class ItemType>
bool Vehichle<ItemType>::IsFull()
{
   return (top==(MAX_ITEMS-1));
}
template<class ItemType>
bool Vehichle<ItemType>::IsEmpty()
{
    return (top == - 1);
}
template<class ItemType>
void Vehichle<ItemType>::MakeEmpty()
{
    top = -1;
    length=0;
}
template<class ItemType>
void Vehichle<ItemType>::Push(ItemType colour, ItemType license)
{
    if (IsFull())
 throw FullStack();
 top++;
 car[top][0] = colour;
 car[top][1] = license;
 length++;
}
template<class ItemType>
void Vehichle<ItemType>::Pop()
{
    if (IsEmpty())
 throw EmptyStack();
 else
 {
   top--;
 }

}
template<class ItemType>
bool Vehichle<ItemType>::licenseCheck(ItemType license)
{
    if (top!=0)
    {
      if( license==car[top-1][1])
        {
            cout<<"!!!License number already exists for   ("<<car[top-1][0]<<" "<< car[top-1][1]<<"), please input again!!!"<<endl;
            Pop();
            return true;
        }
        else return false;
    }


    }



template<class ItemType>
ItemType Vehichle<ItemType>::Top()
{   int index;
    for (index=0; index<2;index++)
    {
       return car[top][index];
    }

}
template<class ItemType>
void Vehichle<ItemType>::lengthIs()
{
    return length;
}


template<class ItemType>
void Vehichle<ItemType>::print()
{
     for(int index=top;index>=0;index--)
    {
        for(int index2=0; index2<2; index2++)
        cout<<car[index][index2]<< " ";
        cout<<endl;
    }
}
