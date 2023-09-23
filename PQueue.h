/** 
 * Describes a max-priority queue and its basic operations
 * @author Duncan, Yueh-Ming
 * @param <E> the priority queue element type
 * <pre>
 * Date: 99-99-9999
 * Course: csc 3102
 * Instructor: Dr. Duncan
 * </pre>
 */

#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <iostream>
#include <functional>

#ifndef PQUEUE_H
#define PQUEUE_H

using namespace std;

/**
 * This class reports priority queue exceptions.
 */
class PQueueException
{
public:
   PQueueException(const string& aMessage)
   {
      message = aMessage;
   }   
   string what() const
   {
      return message;
   }
private:
   string message;
};

template <typename E>
class PQueue
{
private:
   /**
    * A complete tree stored in a vector representing this 
    * binary heap
    */
   vector<E> tree;

   /**
    * A less than comparator lambda bi-predicate function; that is,
    * it compares two elements of this heap when rebuilding it
    */
   std::function<bool(E,E)> cmp = nullptr;

   /**
    * Swaps a parent and child elements of this heap at the specified indices
    * @param place an index of the child element on this heap
    * @param parent an index of the parent element on this heap
    */   
   void swap(int place, int parent);

   /**
    * Rebuilds the heap to ensure that the heap property of the tree is preserved.
    * @param root the root index of the sub-tree to be rebuilt
    */   
   void rebuild(int root);

public:
   /**
    * Constructs an empty priority queue;
   */
   PQueue();

   /**
    * A parameterized constructor    
    * @param fn - a comparator function   
    */
   PQueue(std::function<bool(E,E)> fn);


   /**
    * Determines whether the priority queue is empty.
    * @return true if this priority queue is empty;
    * otherwise, it returns false if the priority queue contains at least one item.
   */
   bool isEmpty() const;

   /**
    * Inserts an item into this priority queue
    * @param item the value to be inserted.
    */
   void insert(E item);

   /**
    * The item with the highest priority 
    * is removed from this priority queue if the priority queue is not empty and its effective
    * size is reduced by 1.
    * @return the item with the highest priority in the priority queue
    * @throw PQueueException when this priority queue is empty
   */
   E remove();

   /**
    * Accesses the item with the highest priority without removing
    * it from the priority queue 
    * @return the item with the highest priority
    * @throw PQueueException when this priority queue is empty
    */
   const E& peek() const;
      
   /**
      @return the size of the priority queue; the effective size of the 
      this priorty queue.
   */
   int size() const;
};
//PQUEUE_H
#endif


