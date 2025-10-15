#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <fstream>

class Convert
{
    private:
        std::string filename;
        std::string from;
        std::string to;
    public:
        Convert();
        ~Convert();

        void setFilename(std::string filename);
        void setFrom(std::string from);
        void setTo(std::string to);
        std::string getFilename() const;
        std::string getFrom() const;
        std::string getTo() const;
};

void  readFile(Convert& conv);
void  writeFile(std::string content);
void  convert(std::string content, std::string from, std::string to);
#endif