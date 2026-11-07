#include "../include/maybe.h"

maybe createMaybe(void* data)
{
	maybe m;
	
	if(data == 0)
	{
		m.isFilled = 0;
		m.data = 0;
	}
	else
	{
		m.isFilled = 1;
		m.data = data;
	}

	return m;
}

int isMaybeFilled(maybe input)
{
	return input.isFilled == 1;
}

void* getMaybeData(maybe input, void* backup)
{
	if(input.isFilled == 1)
	{
		return input.data;
	}
	else
	{
		return backup;
	}
}

maybe changeMaybeData(maybe input, void* newData)
{
	input.data = newData;

	if(newData != 0)
		input.isFilled = 1;

	return input;
}
