#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UTexture2D;
class AActor;
class UClass;
#include "SDocs__pf1693275370.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Proj/Data/SDocs.SDocs", OverrideNativeName="SDocs"))
struct FSDocs__pf1693275370
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Tooltip, OverrideNativeName="Name_3_176350DD48A168AC4BF8A9BA9FB05AFD"))
	FText bpv__Name_3_176350DD48A168AC4BF8A9BA9FB05AFD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Image", Tooltip, OverrideNativeName="Image_9_7AC7A51D48EDB08A20AA65B5E53AA213"))
	UTexture2D* bpv__Image_9_7AC7A51D48EDB08A20AA65B5E53AA213__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Class", Tooltip, OverrideNativeName="Class_8_99ED3C6B4B3EF6EFEB063AB5C69E7357"))
	UClass* bpv__Class_8_99ED3C6B4B3EF6EFEB063AB5C69E7357__pf;
	FSDocs__pf1693275370();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSDocs__pf1693275370& __Other) const
	{
		return FSDocs__pf1693275370::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
