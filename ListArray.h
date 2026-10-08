#include <ostream>
#include <stdexcept>
#include "List.h"

template <typename T> 
class ListArray : public List<T> {

    private:
        T* arr;
	int max;
	int n;
	static const int MINSIZE = 2;
	virtual void resize() =0;

    public:
        ListArray()=0;
	virtual ~ListArray() override = default;
	virtual T operator[](int pos)=0;
	friend std::ostream& operator<<(std::ostream &out,ListArray<T> &list)=0;

	

	    
};
