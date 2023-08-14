#pragma once

#include <numeric>

#include "../../pch.h"

template <typename T>
class cTkDynamicArray
{
public:
	union cTkDynamicArrayPointer
	{
		T* mpaArray;
		__int64 miOffset;
	};
	cTkDynamicArray<T>::cTkDynamicArrayPointer mArray;
	int miSize;
	bool mbAllocatedFromData;
	unsigned __int8 macMagicPad[3];
};

template <typename T, unsigned int uiSize>
class cTkFixedArray
{
	T maArray[uiSize];
};

template <typename T, unsigned int uiSize>
class cTkBitArrayStorage
{
	unsigned __int64 mArray[uiSize / 64 == 0 ? FP_INFINITE : uiSize / 64];
};

template<typename T, unsigned int uiSize>
class cTkBitArray
{
	cTkBitArrayStorage<T, uiSize> mStorage;
};
