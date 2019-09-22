#include "filestream.h"
#include <iostream>

FileStream::FileStream(Stream *stream)
	: m_stream(stream)
{}

FileStream::~FileStream()
{
}

void FileStream::Read()
{
	std::cout << "FleStream Read" << std::endl;
	m_stream->Read();
}