/**
 * implementation file for the  stl vector-based heap max-priority queue class
 * @author William Duncan, Yueh-Ming
 * <pre>
 * file PQueue.cpp
 * Date: 9999-99-99
 * Instructor: Dr. Duncan
 * Course: csc 3102
 * </pre>
*/

#include "PQueue.h"

using namespace std;

template<typename E>
void PQueue<E>::swap(int place, int parent)     //unsure
{
    E* tmp = tree[place];
    tree[place] = tree[parent];
    tree[parent] = tmp;
    delete tmp;

}



template<typename E>
void PQueue<E>::rebuild(int root)
{
    //implement this function

}




template <typename E>
PQueue<E>::PQueue()             //unsure
{
    //implement this function
    tree.clear();
}




template <typename E>
PQueue<E>::PQueue(std::function<bool(E,E)> fn)  //don't understand, re-read
{
    auto cmp = [](auto x, auto y) {             // edit
        return x < y;
    };
}




template <typename E>
bool PQueue<E>::isEmpty() const             //unsure
{
   // implement this function
   if (!tree)
       return true;
   else
       return false;
}

template<typename E>
void PQueue<E>::insert(E item)
{
  //implement this function

}




template<typename E>
E PQueue<E>::remove()
{
   // implement this function

   if (!tree)                   //unsure
       throw PQueueException("Error from remove(): This priority queue is empty");


   return NULL; //?? is it right
}




template<typename E>
const E& PQueue<E>::peek() const
{
   //implement this function
    if (!tree)                   //unsure
        throw PQueueException("Error from peek(): This priority queue is empty");
   return NULL;
}




template<typename E>
int PQueue<E>::size()const
{
   //Implement this function
    int count = 0;
    int* pointer;
    if ()


   return ;
}





