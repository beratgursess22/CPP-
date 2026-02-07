

#include "Serializer.hpp"

int main ()
{
	Data data = {"Ibrahim", 30};
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Original data: name = " << data.name << ", age = " << data.age << std::endl;
	std::cout << "Serialized data: " << raw << std::endl;

	Data* deserializedData = Serializer::deserialize(raw);
	if (deserializedData)
		std::cout << "Deserialized data: name = " << deserializedData->name << ", age = " << deserializedData->age << std::endl;
	else
		std::cout << "Deserialization failed" << std::endl;

	return 0;
}