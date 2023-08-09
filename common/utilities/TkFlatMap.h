#pragma once

#include "../utilities/allocators/TkSTLAllocator.h"

template<typename Key, typename Value/*, typename Compare*/>
class cTkFlatMap/*<unsigned __int64, cTkMetaDataFunctionLookup, cTkKeyPairCompareLess<unsigned __int64, cTkMetaDataFunctionLookup>, -1>*/
{
public:
	std::vector<std::pair<Key, Value>, TkSTLAllocatorShim<std::pair<Key, Value> > > mVector;
	bool mbDirty;
};