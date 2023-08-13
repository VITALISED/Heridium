#pragma once

class cTkNetworkId
{
	union unk_type
	{
		struct $38B70FEB1E0F7019DB27B3B3C57C7E0B
		{
			unsigned __int32 mCreator : 5;
			unsigned __int32 mObjectId : 27;
		};

		unsigned int mUniqueId;
	};

	unk_type mOpaqueId;
};