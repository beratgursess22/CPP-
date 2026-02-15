/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 00:15:01 by igurses           #+#    #+#             */
/*   Updated: 2026/02/16 00:24:14 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP	

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T* arr;
		unsigned int size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array& operator=(const Array &other);
		~Array();
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int getSize() const;
		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Index out of range";
				}
		};
};

template <typename T>
Array<T>::Array() : arr(NULL), size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]()), size(n) {}

template <typename T>
Array<T>::Array(const Array &other) : arr(new T[other.size]()), size(other.size)
{
	for (unsigned int i = 0; i < size; i++)
		arr[i] = other.arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] arr;
		size = other.size;
		arr = new T[size]();
		for (unsigned int i = 0; i < size; i++)
			arr[i] = other.arr[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= size)
		throw OutOfRangeException();
	return arr[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= size)
		throw OutOfRangeException();
	return arr[index];
}

template <typename T>
unsigned int Array<T>::getSize() const
{
	return size;
}

#endif