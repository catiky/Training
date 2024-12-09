#pragma once				
#include<iostream>
using namespace std;
template<class T>
class MyArray
{
public:
	//�вι��� ���� ����
	MyArray(int Capacity)
	{
		//cout << "�вι���" << endl;
		this->m_Capacity = Capacity;
		this->m_Size = 0;
		this->PAddress = new T[this->m_Capacity];
	}
	//��������
	MyArray(const MyArray& arr)
	{
		//cout << "��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->PAddress = arr.PAddress;//ǳ�����ᵼ�¶��������ظ��ͷ�
		this->PAddress = new T[arr.m_Capacity];
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->PAddress[i] = arr.PAddress[i];
		}
	}
	//operator=��ֹǳ����������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=��ֹǳ����������" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
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
	//β�巨
	void push_back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->PAddress[this->m_Size] = val;//�����ĩβ����һ������
		this->m_Size++;//��������Ĵ�С
	}
	//βɾ��
	void pop_back()
	{
		//���û����ʲ�������Ԫ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	//ͨ���±�ķ������������е�Ԫ��
	T& operator[](int index)
	{

		return this->PAddress[index];
	}

	//�������������
	int getCapa()
	{
		return this->m_Capacity;
	}
	// �Ż�����Ĵ�С
	int getSize()
	{
		return this->m_Size;
	}
	//��������
	~MyArray()
	{
		
		if (this->PAddress != NULL)
		{
            //cout << "��������" << endl;
			delete[] this->PAddress;
			this->PAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
	}
private:
	T* PAddress;//ָ��ָ��������ٵ���ʵ����
	int m_Capacity;//��������
	int m_Size;//�����С
};