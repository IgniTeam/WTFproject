using UnrealBuildTool;

public class ProjTarget : TargetRules
{
	public ProjTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Proj");
	}
}
