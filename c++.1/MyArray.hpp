#pragma once				
#include<iostream>
using namespace std;
template<class T>
class MyArray
{
public:
	//有参构造 参数 容量
	MyArray(int Capacity)
	{
		//cout << "有参构造" << endl;
		this->m_Capacity = Capacity;
		this->m_Size = 0;
		this->PAddress = new T[this->m_Capacity];
	}
	//拷贝构造
	MyArray(const MyArray& arr)
	{
		//cout << "拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->PAddress = arr.PAddress;//浅拷贝会导致堆区数据重复释放
		this->PAddress = new T[arr.m_Capacity];
		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->PAddress[i] = arr.PAddress[i];
		}
	}
	//operator=防止浅拷贝的问题
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=防止浅拷贝的问题" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->PAddress != NULL)
		{
			delete[] this->PAddress;
			this->PAddress = NULL;
		}
        this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		this->PAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->PAddress[i] = arr.PAddress[i];
		}
		return *this;
	}
	//尾插法
	void push_back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->PAddress[this->m_Size] = val;//数组的末尾插入一个数据
		this->m_Size++;//更改数组的大小
	}
	//尾删法
	void pop_back()
	{
		//让用户访问不到最后的元素
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	//通过下标的方法访问数组中的元素
	T& operator[](int index)
	{

		return this->PAddress[index];
	}

	//返回数组的容量
	int getCapa()
	{
		return this->m_Capacity;
	}
	// 放回数组的大小
	int getSize()
	{
		return this->m_Size;
	}
	//析构函数
	~MyArray()
	{
		
		if (this->PAddress != NULL)
		{
            //cout << "析构函数" << endl;
			delete[] this->PAddress;
			this->PAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
	}
private:
	T* PAddress;//指针指向堆区开辟的真实数组
	int m_Capacity;//数组容量
	int m_Size;//数组大小
};