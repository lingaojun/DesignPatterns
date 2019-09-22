#ifndef __FILESTREAM_H
#define __FILESTREAM_H

#include "stream.h"
class FileStream : public Stream {
public:
	FileStream(Stream *stream);
	~FileStream();
	void Read();
private:
	Stream *m_stream;
};

#endif // !__FILESTREAM_H
