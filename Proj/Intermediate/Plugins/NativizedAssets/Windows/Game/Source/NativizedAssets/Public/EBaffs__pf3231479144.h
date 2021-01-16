#pragma once
#include "EBaffs__pf3231479144.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Proj/Core/EBaffs.EBaffs", OverrideNativeName="EBaffs", EnumDisplayNameFn="E__EBaffs__pf__GetUserFriendlyName") )
enum class E__EBaffs__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EBaffs::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EBaffs::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EBaffs::NewEnumerator2"),
	E__EBaffs__pf_MAX = 3 UMETA(OverrideName = "EBaffs::EBaffs_MAX"),
};
FText E__EBaffs__pf__GetUserFriendlyName(int32 InValue);
