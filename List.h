#ifndef LIST_H
#define LIST_H

template <typename T> 
class List {
    public:
      virtual  void insert()=0;

	virtual void append()=0;

	virtual void prepend()=0;

	virtual T remove()=0;

	virtual T get()=0;

	virtual int search()=0;

	virtual bool empty()=0;

	virtual int size()=0;

	virtual ~List()=default;
};

#endif
