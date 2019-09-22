#include "filestream.h"
#include "videostream.h"
#include "stream.h"

int main(void)
{
	Stream stream;
	VideoStream videoStream(&stream);
	FileStream fileStream(&stream);
	videoStream.Read();
	fileStream.Read();
	return 0;
}