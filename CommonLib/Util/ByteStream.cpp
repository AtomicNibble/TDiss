#include "Common.h"
#include "ByteStream.h"



bool ByteStream::WriteToFile(FileUtil::ScopedFile& file) const
{
	return file.Write(stream_.data(), stream_.size());
}


