template <class T> class IQueue {
public:
	// �������� � �����
	virtual void put(const T& elem) = 0;
	// ����� �� ������
	virtual T take() = 0;
	// �������� ������� �� ������ 0...size-1,
	// 0 ��� ������, size-1 ��� �����
	virtual T get(int i) const = 0;
	// ������ ������ �������
	virtual int size() const = 0;
};