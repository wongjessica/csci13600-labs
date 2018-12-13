#include <stdexcept>

template <class T> class Victor{
	public:
	Victor();
	Victor(int rep, T i);
	size_t size();
	T& operator[](int i);
	T at(int i);
	void push_back(T i);
	void pop_back();
	void insert(int i, T val);
	void erase(int i);
	void resize(size_t i, const T &val = T());

	private:
	T *content;
	size_t _size;
};

template <class T> 
	Victor<T>::Victor(){
		_size = 0;
		content = new T[_size];
	}

template <class T> 
	Victor<T>::Victor(int rep, T i){
		_size = rep;
		content = new T[_size];
		for (int x = 0; x < _size; x++)
			*(content + x) = i;
	}

template <class T> 
	size_t Victor<T>::size(){
		return _size;
	}

template <class T> 
	T& Victor<T>::operator[](int i){
		return *(content + i);
	}

template <class T> 
	T Victor<T>::at(int i){
		if (i >= _size){
			throw std::out_of_range("Index out of range!");
		}
		else
			return *(content + i);
	}

template <class T>
	void Victor<T>::push_back(T i){
		_size += 1;
		T *temp = new T[_size];
		for (int x = 0; x < _size - 1; x++){
			*(temp + x) = *(content + x);
		}
		delete[] content;
		content = temp;
		*(content + _size - 1) = i;
	}

template <class T>
	void Victor<T>::pop_back(){
		_size--;
	}

template <class T>
	void Victor<T>::insert(int i, T val){
		_size += 1;
		T *temp = new T[_size];
		for (int x = 0; x < i; x++)
			*(temp + x) = *(content + x);
		*(temp + i) = val;
		for (int x = i; x < _size - 1; x++)
			*(temp + x + 1) = *(content + x);
		delete[] content;
		content = temp;
	}

template <class T> 
	void Victor<T>::erase(int i){
		_size -= 1;
		T *temp = new T[_size];
		for (int x = 0; x < i; x++)
			*(temp + x) = *(content + x);
		for (int x = i; x < _size; x++)
			*(temp + x) = *(content + x + 1);
		delete[] content;
		content = temp;
	}

template <class T>
	void Victor<T>::resize(size_t i, const T &val){
		if (i <= _size)
			_size = i;
		else
			while (_size < i)
				push_back(val);
	}

template <class T> 
	void printVictor(Victor<T> v){
	for (int x = 0; x < v.size(); x++)
		std::cout << v[x] << " ";
	std::cout << std::endl;
}
