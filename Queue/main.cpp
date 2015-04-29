#include <iostream>
#include "class.h"

using namespace std;

int main()
{
	Queue<int> queue;
	for (int i = 0; i < 100; i++)
		queue.put(i);
	for (int i = 0; i < 100; i++)
		if (queue.get(i) % 2 == 1)
			queue.put(queue.get(i));

	for (int i = queue.size() - 1; i >= 0; i--)
			cout << queue.get(i) << " ";
	return 0;
}