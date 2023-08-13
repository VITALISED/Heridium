#pragma once

#pragma once

template<int size>
union TkID
{
	TkID()
	{ }
	TkID(const char* lacString)
	{
		strcpy_s(mChars, size, lacString);
	}

	char mChars[size / 8];
	unsigned __int64 mUInt64[size / 64];
};