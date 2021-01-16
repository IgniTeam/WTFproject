#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_Interaction__pf931210303.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Proj/Core/AI/BPI_Interaction.BPI_Interaction_C", OverrideNativeName="BPI_Interaction_C"))
class UBPI_Interaction_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Interaction_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Attack"))
	void bpf__Attack__pf();
public:
};
