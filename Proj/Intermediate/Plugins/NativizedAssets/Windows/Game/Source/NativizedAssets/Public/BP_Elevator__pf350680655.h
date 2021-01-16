#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "BP_Hero__pf3231479144.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"

struct FUnconvertedWrapper__ABP_Elevator_C__pf350680655 : public FUnconvertedWrapper<AActor>
{
	FUnconvertedWrapper__ABP_Elevator_C__pf350680655(const AActor* __InObject) : FUnconvertedWrapper<AActor>(__InObject){}
	FORCENOINLINE UBoxComponent* & GetRef__Box__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Box")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UBoxComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__Wall2__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Wall2")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__Wall1__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Wall1")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE USphereComponent* & GetRef__Sphere__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Sphere")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USphereComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__Cube__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Cube")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE float & GetRef__LockDoors_Wall2_710E3B674628129ADAB71F9727533B5D__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("LockDoors_Wall2_710E3B674628129ADAB71F9727533B5D")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__LockDoors_Wall1_710E3B674628129ADAB71F9727533B5D__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("LockDoors_Wall1_710E3B674628129ADAB71F9727533B5D")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE TEnumAsByte<ETimelineDirection::Type> & GetRef__LockDoors__Direction_710E3B674628129ADAB71F9727533B5D__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("LockDoors__Direction_710E3B674628129ADAB71F9727533B5D")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<TEnumAsByte<ETimelineDirection::Type> >(__Object));
	}
	FORCENOINLINE UTimelineComponent* & GetRef__LockDoors__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("LockDoors")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UTimelineComponent* >(__Object));
	}
	FORCENOINLINE float & GetRef__Timeline_0_NewTrack_0_355474294BF231A3A051F1937DB1320A__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Timeline_0_NewTrack_0_355474294BF231A3A051F1937DB1320A")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE TEnumAsByte<ETimelineDirection::Type> & GetRef__Timeline_0__Direction_355474294BF231A3A051F1937DB1320A__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Timeline_0__Direction_355474294BF231A3A051F1937DB1320A")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<TEnumAsByte<ETimelineDirection::Type> >(__Object));
	}
	FORCENOINLINE UTimelineComponent* & GetRef__Timeline_0__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Timeline_0")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UTimelineComponent* >(__Object));
	}
	FORCENOINLINE ABP_Hero_C__pf3231479144* & GetRef__Character__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Character")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<ABP_Hero_C__pf3231479144* >(__Object));
	}
	FORCENOINLINE bool & GetRef__HaveNeededItems__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("HaveNeededItems")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__IncreaseCounter__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("IncreaseCounter")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE TArray<UClass*> & GetRef__Temp__pf()
	{
		static TWeakFieldPtr<const FProperty> __PropertyPtr{};
		const FProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Temp")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<TArray<UClass*> >(__Object));
	}
	FORCENOINLINE void bpf__LiftDown__pf()
	{
		static const FName __FunctionName(TEXT("LiftDown"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
};
