#include "NativizedAssets.h"
#include "WB_Main__pf4176322116.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "WB_HP__pf4176322116.h"
#include "WB_Inventory__pf4176322116.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "GM_Main__pf3231479144.h"
#include "BP_Hero__pf3231479144.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UWB_Main_C__pf4176322116::UWB_Main_C__pf4176322116(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button_0__pf = nullptr;
	bpv__ProgressBar_119__pf = nullptr;
	bpv__TextBlock_90__pf = nullptr;
	bpv__TextBlock_104__pf = nullptr;
	bpv__WB_HP__pf = nullptr;
	bpv__WB_Inventory__pf = nullptr;
	bpv__Character__pf = nullptr;
	bpv__GM__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWB_Main_C__pf4176322116::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Main_C__pf4176322116::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AGM_Main_C__pf3231479144::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Hero_C__pf3231479144::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWB_HP_C__pf4176322116::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWB_Inventory_C__pf4176322116::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("NewAnimation_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[0];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_0"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(9);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Left = 56.000000f;
	__Local__6->LayoutData.Offsets.Top = 68.000000f;
	__Local__6->LayoutData.Offsets.Right = 414.666656f;
	__Local__6->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UWB_HP_C__pf4176322116>(__Local__1, TEXT("WB_HP"), (EObjectFlags)0x00280008);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__8->LayoutData.Offsets.Left = -468.960938f;
	__Local__8->LayoutData.Offsets.Top = 20.000000f;
	__Local__8->LayoutData.Offsets.Right = 980.852844f;
	__Local__8->LayoutData.Offsets.Bottom = 104.048050f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__8->Parent = __Local__4;
	auto __Local__9 = NewObject<UWB_Inventory_C__pf4176322116>(__Local__1, TEXT("WB_Inventory"), (EObjectFlags)0x00280008);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__5.Add(__Local__8);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = 56.000000f;
	__Local__10->LayoutData.Offsets.Top = 136.000000f;
	__Local__10->LayoutData.Offsets.Right = 411.422516f;
	__Local__10->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__10->Parent = __Local__4;
	auto __Local__11 = NewObject<UProgressBar>(__Local__1, TEXT("ProgressBar_119"), (EObjectFlags)0x00280008);
	__Local__11->FillColorAndOpacity = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__11->Slot = __Local__10;
	__Local__11->Visibility = ESlateVisibility::Hidden;
	__Local__10->Content = __Local__11;
	__Local__5.Add(__Local__10);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = -120.960938f;
	__Local__12->LayoutData.Offsets.Top = -128.000000f;
	__Local__12->LayoutData.Offsets.Right = 151.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__12->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__12->Parent = __Local__4;
	auto __Local__13 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_104"), (EObjectFlags)0x00280008);
	__Local__13->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__13->Slot = __Local__12;
	__Local__13->bIsVariable = true;
	__Local__12->Content = __Local__13;
	__Local__5.Add(__Local__12);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = 56.000000f;
	__Local__14->LayoutData.Offsets.Top = 188.000000f;
	__Local__14->LayoutData.Offsets.Right = 264.891663f;
	__Local__14->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__14->Parent = __Local__4;
	auto __Local__15 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_190"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6111366D4967C2EBA734119DFAC87C9A]\", \"90CD78684631C1E20BF7B8929507C7C7\", \"\u0421\u0423\u041f\u0415\u0420\u041f\u0420\u0418\u0401\u041c\")")	);
	__Local__15->Slot = __Local__14;
	__Local__15->Visibility = ESlateVisibility::Hidden;
	__Local__14->Content = __Local__15;
	__Local__5.Add(__Local__14);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__16->LayoutData.Offsets.Left = 72.000000f;
	__Local__16->LayoutData.Offsets.Top = 16.000000f;
	__Local__16->LayoutData.Offsets.Right = 264.891663f;
	__Local__16->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__16->Parent = __Local__4;
	auto __Local__17 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__17->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6111366D4967C2EBA734119DFAC87C9A]\", \"08E754784FAD22F99CF31BB817598A4B\", \"\u0417\u0414\u041e\u0420\u041e\u0412\u042c\u0415\")")	);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__5.Add(__Local__16);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_16"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = 40.000000f;
	__Local__18->LayoutData.Offsets.Top = 232.000000f;
	__Local__18->LayoutData.Offsets.Right = 179.828827f;
	__Local__18->LayoutData.Offsets.Bottom = 64.024025f;
	__Local__18->Parent = __Local__4;
	auto __Local__19 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_261"), (EObjectFlags)0x00280008);
	__Local__19->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6111366D4967C2EBA734119DFAC87C9A]\", \"195DA4724AF22CA201B7AF8B4C6E8996\", \"\u0413\u041e\u0422\u041e\u0412 \u041d\u0410\u0416\u041c\u0418\u0422\u0415 \u0415\")")	);
	__Local__19->Font.Size = 40;
	__Local__19->Slot = __Local__18;
	__Local__19->bIsEnabled = false;
	__Local__19->Visibility = ESlateVisibility::Hidden;
	__Local__18->Content = __Local__19;
	__Local__5.Add(__Local__18);
	auto __Local__20 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__20->LayoutData.Offsets.Left = -300.000000f;
	__Local__20->LayoutData.Offsets.Top = 50.000000f;
	__Local__20->LayoutData.Offsets.Right = 250.000000f;
	__Local__20->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__20->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__20->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__20->Parent = __Local__4;
	auto __Local__21 = NewObject<UButton>(__Local__1, TEXT("Button_0"), (EObjectFlags)0x00280008);
	__Local__21->WidgetStyle.Normal.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__21->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__21->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__21->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__21->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Main_C__pf4176322116::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__21->WidgetStyle.Hovered.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__21->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__21->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__21->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__21->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Main_C__pf4176322116::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__21->WidgetStyle.Pressed.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__21->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__21->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__21->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__21->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Main_C__pf4176322116::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__21), UPanelWidget::__PPO__Slots() )));
	__Local__25 = TArray<UPanelSlot*> ();
	__Local__25.Reserve(1);
	auto __Local__26 = NewObject<UButtonSlot>(__Local__21, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__26->Parent = __Local__21;
	auto __Local__27 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_88"), (EObjectFlags)0x00280008);
	__Local__27->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6111366D4967C2EBA734119DFAC87C9A]\", \"AB63454146BD8997F5430897FABCEE06\", \"\u041f\u0410\u0423\u0417\u0410\")")	);
	auto& __Local__28 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__27->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__28 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__27->Font.Size = 30;
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__25.Add(__Local__26);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__5.Add(__Local__20);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__29->LayoutData.Offsets.Left = 72.000000f;
	__Local__29->LayoutData.Offsets.Top = 150.000000f;
	__Local__29->LayoutData.Offsets.Right = 264.713715f;
	__Local__29->LayoutData.Offsets.Bottom = 64.024025f;
	__Local__29->Parent = __Local__4;
	auto __Local__30 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_90"), (EObjectFlags)0x00280008);
	__Local__30->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__30->Font.Size = 42;
	__Local__30->Slot = __Local__29;
	__Local__30->bIsVariable = true;
	__Local__29->Content = __Local__30;
	__Local__5.Add(__Local__29);
	__Local__1->RootWidget = __Local__4;
	auto __Local__31 = NewObject<UMovieScene>(__Local__2, TEXT("NewAnimation"), (EObjectFlags)0x00280008);
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__31), UMovieScene::__PPO__Possessables() )));
	__Local__32 = TArray<FMovieScenePossessable> ();
	__Local__32.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__32.GetData(), 1);
	auto& __Local__33 = __Local__32[0];
	auto& __Local__34 = (*(AccessPrivateProperty<FGuid >(&(__Local__33), FMovieScenePossessable::__PPO__Guid() )));
	__Local__34 = FGuid(0x3A874080, 0x4DE484A3, 0xF681B6B2, 0xE892B12E);
	auto& __Local__35 = (*(AccessPrivateProperty<FString >(&(__Local__33), FMovieScenePossessable::__PPO__Name() )));
	__Local__35 = FString(TEXT("TextBlock_104"));
	auto& __Local__36 = (*(AccessPrivateProperty<UClass* >(&(__Local__33), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__36 = UTextBlock::StaticClass();
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__31), UMovieScene::__PPO__ObjectBindings() )));
	__Local__37 = TArray<FMovieSceneBinding> ();
	__Local__37.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__37.GetData(), 1);
	auto& __Local__38 = __Local__37[0];
	auto& __Local__39 = (*(AccessPrivateProperty<FGuid >(&(__Local__38), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__39 = FGuid(0x3A874080, 0x4DE484A3, 0xF681B6B2, 0xE892B12E);
	auto& __Local__40 = (*(AccessPrivateProperty<FString >(&(__Local__38), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__40 = FString(TEXT("TextBlock_104"));
	auto& __Local__41 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__38), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__41 = TArray<UMovieSceneTrack*> ();
	__Local__41.Reserve(1);
	auto __Local__42 = NewObject<UMovieScene2DTransformTrack>(__Local__31, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__43 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__42), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__43.PropertyName = FName(TEXT("RenderTransform"));
	__Local__43.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__43.bCanUseClassLookup = true;
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__42), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__44 = TArray<UMovieSceneSection*> ();
	__Local__44.Reserve(1);
	auto __Local__45 = NewObject<UMovieScene2DTransformSection>(__Local__42, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__46 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__45->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__47 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__45->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__46)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__47)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__45->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__48 = TArray<FFrameNumber> ();
	__Local__48.Reserve(4);
	__Local__48.Add(FFrameNumber{});
	__Local__48.Add(FFrameNumber{});
	__Local__48[1].Value = 15000;
	__Local__48.Add(FFrameNumber{});
	__Local__48[2].Value = 30000;
	__Local__48.Add(FFrameNumber{});
	__Local__48[3].Value = 45000;
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__45->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__49 = TArray<FMovieSceneFloatValue> ();
	__Local__49.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__49.GetData(), 4);
	auto& __Local__50 = __Local__49[0];
	auto& __Local__51 = __Local__49[1];
	auto& __Local__52 = __Local__49[2];
	auto& __Local__53 = __Local__49[3];
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__45->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__54 = TArray<FFrameNumber> ();
	__Local__54.Reserve(4);
	__Local__54.Add(FFrameNumber{});
	__Local__54.Add(FFrameNumber{});
	__Local__54[1].Value = 15000;
	__Local__54.Add(FFrameNumber{});
	__Local__54[2].Value = 30000;
	__Local__54.Add(FFrameNumber{});
	__Local__54[3].Value = 45000;
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__45->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__55 = TArray<FMovieSceneFloatValue> ();
	__Local__55.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__55.GetData(), 4);
	auto& __Local__56 = __Local__55[0];
	auto& __Local__57 = __Local__55[1];
	__Local__57.Value = 300.000000f;
	auto& __Local__58 = __Local__55[2];
	__Local__58.Value = 300.000000f;
	auto& __Local__59 = __Local__55[3];
	auto& __Local__60 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__45->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__60 = TArray<FFrameNumber> ();
	__Local__60.Reserve(2);
	__Local__60.Add(FFrameNumber{});
	__Local__60.Add(FFrameNumber{});
	__Local__60[1].Value = 45000;
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__45->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__61 = TArray<FMovieSceneFloatValue> ();
	__Local__61.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__61.GetData(), 2);
	auto& __Local__62 = __Local__61[0];
	auto& __Local__63 = __Local__61[1];
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__45->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__64 = TArray<FFrameNumber> ();
	__Local__64.Reserve(2);
	__Local__64.Add(FFrameNumber{});
	__Local__64.Add(FFrameNumber{});
	__Local__64[1].Value = 45000;
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__45->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__65 = TArray<FMovieSceneFloatValue> ();
	__Local__65.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__65.GetData(), 2);
	auto& __Local__66 = __Local__65[0];
	__Local__66.Value = 1.000000f;
	auto& __Local__67 = __Local__65[1];
	__Local__67.Value = 1.000000f;
	auto& __Local__68 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__45->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__68 = TArray<FFrameNumber> ();
	__Local__68.Reserve(2);
	__Local__68.Add(FFrameNumber{});
	__Local__68.Add(FFrameNumber{});
	__Local__68[1].Value = 45000;
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__45->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__69 = TArray<FMovieSceneFloatValue> ();
	__Local__69.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__69.GetData(), 2);
	auto& __Local__70 = __Local__69[0];
	__Local__70.Value = 1.000000f;
	auto& __Local__71 = __Local__69[1];
	__Local__71.Value = 1.000000f;
	auto& __Local__72 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__45->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__72 = TArray<FFrameNumber> ();
	__Local__72.Reserve(2);
	__Local__72.Add(FFrameNumber{});
	__Local__72.Add(FFrameNumber{});
	__Local__72[1].Value = 45000;
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__45->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__73 = TArray<FMovieSceneFloatValue> ();
	__Local__73.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__73.GetData(), 2);
	auto& __Local__74 = __Local__73[0];
	auto& __Local__75 = __Local__73[1];
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__45->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__76 = TArray<FFrameNumber> ();
	__Local__76.Reserve(2);
	__Local__76.Add(FFrameNumber{});
	__Local__76.Add(FFrameNumber{});
	__Local__76[1].Value = 45000;
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__45->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__77 = TArray<FMovieSceneFloatValue> ();
	__Local__77.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__77.GetData(), 2);
	auto& __Local__78 = __Local__77[0];
	auto& __Local__79 = __Local__77[1];
	__Local__45->Easing.EaseIn = __Local__46;
	__Local__45->Easing.EaseOut = __Local__47;
	__Local__45->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(45000)));
	auto& __Local__80 = (*(AccessPrivateProperty<FGuid >((__Local__45), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__80 = FGuid(0x74121EB9, 0x49C24DB4, 0x6A4DD0A3, 0x0FD20A82);
	__Local__44.Add(__Local__45);
	auto& __Local__81 = (*(AccessPrivateProperty<FGuid >((__Local__42), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__81 = FGuid(0xC86BF5FD, 0x4FB5B6D1, 0x3AC73F91, 0xDF336AEA);
	auto& __Local__82 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__42), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__82.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__82.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__82.Entries.GetData(), 1);
	auto& __Local__83 = __Local__82.Entries[0];
	__Local__83.Section = __Local__45;
	static TWeakFieldPtr<FProperty> __Local__85{};
	const FProperty* __Local__84 = __Local__85.Get();
	if (nullptr == __Local__84)
	{
		__Local__84 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__84);
		__Local__85 = __Local__84;
	}
	auto& __Local__86 = (*(__Local__84->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__83.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__88{};
	const FProperty* __Local__87 = __Local__88.Get();
	if (nullptr == __Local__87)
	{
		__Local__87 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__87);
		__Local__88 = __Local__87;
	}
	auto& __Local__89 = (*(__Local__87->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__86), 0)));
	__Local__89 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__91{};
	const FProperty* __Local__90 = __Local__91.Get();
	if (nullptr == __Local__90)
	{
		__Local__90 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__90);
		__Local__91 = __Local__90;
	}
	auto& __Local__92 = (*(__Local__90->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__83.Range), 0)));
	auto& __Local__93 = (*(__Local__87->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__92), 0)));
	__Local__93 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__95{};
	const FProperty* __Local__94 = __Local__95.Get();
	if (nullptr == __Local__94)
	{
		__Local__94 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__94);
		__Local__95 = __Local__94;
	}
	auto& __Local__96 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__92), 0)));
	__Local__96.Value = 45000;
	__Local__83.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__97 = (*(AccessPrivateProperty<FGuid >((__Local__42), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__97 = FGuid(0xC86BF5FD, 0x4FB5B6D1, 0x3AC73F91, 0xDF336AEA);
	__Local__41.Add(__Local__42);
	auto& __Local__98 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__31), UMovieScene::__PPO__PlaybackRange() )));
	__Local__98 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45001)));
	auto& __Local__99 = (*(AccessPrivateProperty<FFrameRate >((__Local__31), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__101{};
	const FProperty* __Local__100 = __Local__101.Get();
	if (nullptr == __Local__100)
	{
		__Local__100 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__100);
		__Local__101 = __Local__100;
	}
	auto& __Local__102 = (*(__Local__100->ContainerPtrToValuePtr<int32 >(&(__Local__99), 0)));
	__Local__102 = 20;
	auto& __Local__103 = (*(AccessPrivateProperty<FGuid >((__Local__31), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__103 = FGuid(0xDD51142D, 0x48801447, 0x21031A98, 0xC6C09C68);
	__Local__2->MovieScene = __Local__31;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__104 = __Local__2->AnimationBindings[0];
	__Local__104.WidgetName = FName(TEXT("TextBlock_104"));
	__Local__104.AnimationGuid = FGuid(0x3A874080, 0x4DE484A3, 0xF681B6B2, 0xE892B12E);
	auto& __Local__105 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__105 = FString(TEXT("NewAnimation"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__106 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__106 = FGuid(0xD546D232, 0x41B7B65C, 0x6FD6128C, 0xE804CAA7);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
}
PRAGMA_ENABLE_OPTIMIZATION
void UWB_Main_C__pf4176322116::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__107;
	SlotNames.Append(__Local__107);
}
void UWB_Main_C__pf4176322116::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__108;
	__Local__108.Reserve(1);
	__Local__108.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UWB_Main_C__pf4176322116::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__109;
	__Local__109.AddUninitialized(2);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__109.GetData(), 2);
	auto& __Local__110 = __Local__109[0];
	__Local__110.ObjectName = FString(TEXT("ProgressBar_119"));
	__Local__110.PropertyName = FName(TEXT("Percent"));
	__Local__110.FunctionName = FName(TEXT("GetPercent_0"));
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__110.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__111 = TArray<FPropertyPathSegment> ();
	__Local__111.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__111.GetData(), 1);
	auto& __Local__112 = __Local__111[0];
	__Local__112.Name = FName(TEXT("GetPercent_0"));
	auto& __Local__113 = __Local__109[1];
	__Local__113.ObjectName = FString(TEXT("TextBlock_90"));
	__Local__113.PropertyName = FName(TEXT("Text"));
	__Local__113.FunctionName = FName(TEXT("GetText_0"));
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__113.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__114 = TArray<FPropertyPathSegment> ();
	__Local__114.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__114.GetData(), 1);
	auto& __Local__115 = __Local__114[0];
	__Local__115.Name = FName(TEXT("GetText_0"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWB_Main_C__pf4176322116::StaticClass())->MiscConvertedSubobjects[0]), __Local__108, __Local__109);
}
void UWB_Main_C__pf4176322116::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWB_Main_C__pf4176322116::bpf__ExecuteUbergraph_WB_Main__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Character__pf))
	{
		bpv__Character__pf->bpf__Pause__pf();
	}
	return; // KCST_GotoReturn
}
void UWB_Main_C__pf4176322116::bpf__ExecuteUbergraph_WB_Main__pf_1(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
	b0l__K2Node_DynamicCast_AsBP_Hero__pf = Cast<ABP_Hero_C__pf3231479144>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBP_Hero__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__Character__pf = b0l__K2Node_DynamicCast_AsBP_Hero__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
	b0l__K2Node_DynamicCast_AsGM_Main__pf = Cast<AGM_Main_C__pf3231479144>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsGM_Main__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__GM__pf = b0l__K2Node_DynamicCast_AsGM_Main__pf;
	return; // KCST_GotoReturn
}
void UWB_Main_C__pf4176322116::bpf__ExecuteUbergraph_WB_Main__pf_2(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__TextBlock_104__pf))
	{
		bpv__TextBlock_104__pf->SetText(b0l__K2Node_CustomEvent_InText__pf);
	}
	bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__NewAnimation__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
	return; // KCST_GotoReturn
}
void UWB_Main_C__pf4176322116::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WB_Main__pf_0(9);
}
void UWB_Main_C__pf4176322116::bpf__Buff__pf(const FText& bpp__InText__pf__const)
{
	typedef FText  T__Local__116;
	T__Local__116& bpp__InText__pf = *const_cast<T__Local__116 *>(&bpp__InText__pf__const);
	b0l__K2Node_CustomEvent_InText__pf = bpp__InText__pf;
	bpf__ExecuteUbergraph_WB_Main__pf_2(6);
}
void UWB_Main_C__pf4176322116::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_WB_Main__pf_1(3);
}
float  UWB_Main_C__pf4176322116::bpf__GetPercent_0__pf()
{
	float bpp__ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	ABP_Hero_C__pf3231479144* bpfv__K2Node_DynamicCast_AsBP_Hero__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsBP_Hero__pf = Cast<ABP_Hero_C__pf3231479144>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Hero__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				float  __Local__117 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(((::IsValid(bpfv__K2Node_DynamicCast_AsBP_Hero__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Hero__pf->bpv__SuperShot__pf) : (__Local__117)), 10.000000);
				bpp__ReturnValue__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UWB_Main_C__pf4176322116::bpf__GetVisibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				float  __Local__118 = 0.000000;
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(((::IsValid(bpv__Character__pf)) ? (bpv__Character__pf->bpv__SuperShot__pf) : (__Local__118)), 10.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpp__ReturnValue__pf = ESlateVisibility::Hidden;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UWB_Main_C__pf4176322116::bpf__GetText_0__pf()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				int32  __Local__119 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(bpv__GM__pf)) ? (bpv__GM__pf->bpv__EnemiesCount__pf) : (__Local__119)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				int32  __Local__120 = 0;
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(((::IsValid(bpv__GM__pf)) ? (bpv__GM__pf->bpv__EnemiesCount__pf) : (__Local__120)));
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("\u0412\u0440\u0430\u0433\u043e\u0432 \u043e\u0441\u0442\u0430\u043b\u043e\u0441\u044c: ")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(FString(TEXT("\u041d\u0430\u043f\u0440\u0430\u0432\u043b\u044f\u0439\u0442\u0435\u0441\u044c\r\n\u043a \u043b\u0438\u0444\u0442\u0443")));
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Main_C__pf4176322116::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonNormal.ButtonNormal 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonHovered.ButtonHovered 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonPressed.ButtonPressed 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Main_C__pf4176322116::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{69, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameModeBase 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{83, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{86, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{41, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ProgressBar 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Texture2D 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.PanelSlot 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.HorizontalBox 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.PanelWidget 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Engine/EngineResources/AICON-Green.AICON-Green 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Proj/Core/UI/rect817.rect817 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Proj/Core/UI/Loading_Mat.Loading_Mat 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIPerceptionStimuliSourceComponent 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AISense_Hearing 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Proj/Core/Character/ShotGun.ShotGun 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DamageType 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Controller 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CapsuleComponent 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/InfinityBladeEffects/Effects/FX_Monsters/FX_Monster_Gruntling/Master/P_BackPack_MuzzleFlash.P_BackPack_MuzzleFlash 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Proj/Sounds/51464__smcameron__bombexplosion.51464__smcameron__bombexplosion 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Proj/Core/Character/Idle_Aiming.Idle_Aiming 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Proj/Core/Character/BS_IdleRun.BS_IdleRun 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Proj/Core/Character/Idle_Aiming_Skeleton.Idle_Aiming_Skeleton 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Proj/Sounds/270421__littlerobotsoundfactory__footstep-dirt-08.270421__littlerobotsoundfactory__footstep-dirt-08 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimInstance 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerStart 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Proj/Placeables/Interactables/Elevator/BP_Elevator.BP_Elevator_C 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BP_Elevator_C /Game/Proj/Placeables/Interactables/Elevator/BP_Elevator.Default__BP_Elevator_C 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Proj/Placeables/Interactables/BP_InteractableBase.BP_InteractableBase_C 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BP_InteractableBase_C /Game/Proj/Placeables/Interactables/BP_InteractableBase.Default__BP_InteractableBase_C 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameSession 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameStateBase 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerState 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.HUD 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpectatorPawn 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CheatManager 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MediaPlaylist /Game/Proj/Core/UI/Loadings.Loadings 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MediaTexture /Game/Proj/Core/UI/Loading.Loading 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MediaPlayer /Game/Proj/Core/UI/LoadingPlayer.LoadingPlayer 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace1D /Game/Mannequin/Animations/ThirdPerson_IdleRun_2D.ThirdPerson_IdleRun_2D 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/MediaAssets.MediaPlayer 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Proj/Sounds/426308__mtjohnson__hollywood-punch.426308__mtjohnson__hollywood-punch 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AIModule.ActorPerceptionBlueprintInfo 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AIModule.AIStimulus 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BehaviorTree /Game/Proj/Core/AI/BT_AI.BT_AI 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mannequin/Animations/ThirdPersonJump_Loop.ThirdPersonJump_Loop 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mannequin/Animations/ThirdPersonJump_Start.ThirdPersonJump_Start 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIPerceptionComponent 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.BlackboardComponent 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Mannequin/Character/Mesh/UE4_Mannequin_Skeleton.UE4_Mannequin_Skeleton 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mannequin/Animations/ThirdPerson_Jump.ThirdPerson_Jump 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Proj/Core/UI/Scene.Scene 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Proj/Core/GM_Main.GM_Main_C 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Proj/Core/BP_Hero.BP_Hero_C 
		{124, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Proj/Core/UI/WB_HP.WB_HP_C 
		{125, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Proj/Core/UI/WB_Inventory.WB_Inventory_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UWB_Main_C__pf4176322116
{
	FRegisterHelper__UWB_Main_C__pf4176322116()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Proj/Core/UI/WB_Main"), &UWB_Main_C__pf4176322116::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UWB_Main_C__pf4176322116 Instance;
};
FRegisterHelper__UWB_Main_C__pf4176322116 FRegisterHelper__UWB_Main_C__pf4176322116::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
