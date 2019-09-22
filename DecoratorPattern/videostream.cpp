#include "videostream.h"
#include <iostream>

VideoStream::VideoStream(Stream *stream)
	: m_stream(stream)
{}

VideoStream::~VideoStream()
{
}
void VideoStream::Read()
{
	std::cout << "VideoStream Read" << std::endl;
	m_stream->Read();
}