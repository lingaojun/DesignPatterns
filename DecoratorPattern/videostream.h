#ifndef __VIDEOSTREAM_H
#define __VIDEOSTREAM_H

#include "stream.h"
class VideoStream : public Stream {
public:
	VideoStream(Stream * stream);
	~VideoStream();
	void Read();
private:
	Stream *m_stream;
};

#endif // !__VIDEOSTREAM_H
