#pragma once


struct maybeType
{
	int isFilled; // a boolean variable
	void* data;
};
typedef struct maybeType maybe;

maybe createMaybe(void* data);
int isMaybeFilled(maybe input);
void* getMaybeData(maybe input, void* backup);
maybe changeMaybeData(maybe input, void* newData);
