#include "template.h"

template <class T> struct List
{
	T data;
	List<T> *next;

}; 

template <class T> class Queue: public IQueue<T>
{
	List<T> *first;
	List<T> *last;
	unsigned int size_q;

public:
	// O(1)
	Queue() 
	{ 
		first = NULL;
		last = NULL;
		size_q = 0;
	}
	// O(N)
	~Queue()
	{
		List<T> *runner = first;
		while (runner != last)
		{
			first = runner->next;
			delete runner;
			runner = first;
		}
		delete last;
	}
	// O(N)
	void put(const T& elem)
	{
		List<T> *runner = new List<T>;
		runner->data = elem;

		if (first == NULL)
		{
			first = runner;
			last = runner;
			size_q++;
		}
		else
		{
			last->next = runner;
			last = runner;
			size_q++;
		}
	}
	// O(1)
	T take()
	{
		if (first != NULL)
			return first->data;
	}
	// O(N)
	T get(int i) const
	{
		List<T> *runner = first;
		for (int k = 0; k < i; k++)
		{
			runner = runner->next;
		}
		return runner->data;
	}
	// O(1)
	int size() const
	{
		return size_q;
	}

};