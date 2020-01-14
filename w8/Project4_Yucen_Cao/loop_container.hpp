#ifndef loop_container_hpp
#define loop_container_hpp

#include <cassert>
#include <iostream>

namespace cs_container {

template <class T>
class LinkNode {
public:
  T val;
  LinkNode* next;
  LinkNode* prev;
  
  LinkNode();
  LinkNode(const T val);
};

/** 
 * container using a cyclic linked list
 */
template <class T>
class LoopContainer {
private:
  LinkNode<T>* begin;
  LinkNode<T>* end;

public:
  LoopContainer();
  ~LoopContainer();

  void step();  // move begin to the next node
  void pop();  // pop begin
  T& front();  // get the element in front
  void push(const T val);  // add new element to the end

  bool empty();

  void print();
};

template <class T>
LinkNode<T>::LinkNode() {}

template <class T>
LinkNode<T>::LinkNode(const T val)
:val(val), next(NULL), prev(NULL) {}

template <class T>
LoopContainer<T>::LoopContainer(): begin(NULL), end(NULL) {}

template <class T>
LoopContainer<T>::~LoopContainer() {
  while (!empty()) {
	pop();
  }
}

template <class T>
void LoopContainer<T>::step() {
  assert(!empty());
  begin = begin -> next;
  end = end -> next;
}

template <class T>
void LoopContainer<T>::pop() {
  assert(!empty());
  auto curr = begin;
  if (curr == end) {
	  begin = NULL;
	  end = NULL;
  } else {
    curr -> prev -> next = curr -> next; 
    curr -> next -> prev = curr -> prev;
    begin = curr -> next;
  }

  delete curr;
}

template <class T>
T& LoopContainer<T>::front() {
  assert(!empty());
  return begin -> val;
}

template <class T>
bool LoopContainer<T>::empty() {
  return begin == NULL && end == NULL;
}

template <class T>
void LoopContainer<T>::push(const T val) {
  LinkNode<T>* tmp = new LinkNode<T>(val);
  if (empty()) {
    begin = tmp;
    end = tmp;
    tmp -> next = tmp;
    tmp -> prev = tmp;
  } 
  tmp -> next = end -> next;
  tmp -> prev = end; 
  end -> next = tmp;
  begin -> prev = tmp;
  end = tmp;
}

template <class T>
void LoopContainer<T>::print() {
  assert(!empty());
  auto curr = begin;
  while (curr != end) {
    std::cout << curr -> val << " -> ";
    curr = curr -> next;
  }
	std::cout << curr -> val << std::endl;
}
	
} // end namespace cs_container

#endif
