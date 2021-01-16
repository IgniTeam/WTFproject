#include "NativizedAssets.h"
#include "EBaffs__pf3231479144.h"
FText E__EBaffs__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EBaffs__pf>(InValue);
	switch(EnumValue)
	{
		case E__EBaffs__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9EFC86434D2FC2F955E0B8A3207B9115]\", \"B3645EBD465756C58459148B27E6823F\", \"Speed\")"), Text); break;
		case E__EBaffs__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9EFC86434D2FC2F955E0B8A3207B9115]\", \"686F08E64ABB8E76652ED8876803DEE7\", \"Fire\")"), Text); break;
		case E__EBaffs__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9EFC86434D2FC2F955E0B8A3207B9115]\", \"223B446F4686B2E03390838CDEB537EA\", \"HP\")"), Text); break;
		case E__EBaffs__pf::E__EBaffs__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("EBaffs MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
