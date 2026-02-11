/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:41:28 by igurses           #+#    #+#             */
/*   Updated: 2026/02/11 16:56:27 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Serializer.hpp"

int main ()
{
	std::cout <<"------DATA1------" <<std::endl;

	Data data = {"Ibrahim", 30};
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Original data: name = " << data.name << ", age = " << data.age << std::endl;
	std::cout << "Serialized data: " << raw << std::endl;
	
	std::cout <<"------DATA2------" <<std::endl;
	Data data2 = {"Berat", 31};
	uintptr_t raw2 = Serializer::serialize(&data2);
	std::cout << "Original data: name = " << data2.name << ", age = " << data2.age << std::endl;
	std::cout << "Serialized data: " << raw2 << std::endl;
	
	std::cout <<"------DESERIALIZATION------" <<std::endl;
	Data* deserializedData = Serializer::deserialize(raw);
	if (deserializedData)
		std::cout << "Deserialized data: name = " << deserializedData->name << ", age = " << deserializedData->age << std::endl;
	else
		std::cout << "Deserialization failed" << std::endl;
	std::cout << std::endl;
	std::cout <<"------COMPARISON------" <<std::endl;
	if (deserializedData == &data)
		std::cout << "Deserialized data matches original data" << std::endl;
	else
		std::cout << "Deserialized data does not match original data" << std::endl;
	
	return 0;
}