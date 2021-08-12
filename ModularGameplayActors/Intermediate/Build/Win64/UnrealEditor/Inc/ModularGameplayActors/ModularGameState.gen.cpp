// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameState() {}
// Cross Module References
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
// End Cross Module References
	void AModularGameStateBase::StaticRegisterNativesAModularGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_AModularGameStateBase_NoRegister()
	{
		return AModularGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Pair this with a ModularGameModeBase */" },
		{ "HideCategories", "Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Pair this with a ModularGameModeBase" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameStateBase_Statics::ClassParams = {
		&AModularGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularGameStateBase, 3705005175);
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameStateBase>()
	{
		return AModularGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularGameStateBase(Z_Construct_UClass_AModularGameStateBase, &AModularGameStateBase::StaticClass, TEXT("/Script/ModularGameplayActors"), TEXT("AModularGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameStateBase);
	void AModularGameState::StaticRegisterNativesAModularGameState()
	{
	}
	UClass* Z_Construct_UClass_AModularGameState_NoRegister()
	{
		return AModularGameState::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Pair this with a ModularGameState */" },
		{ "HideCategories", "Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Pair this with a ModularGameState" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameState_Statics::ClassParams = {
		&AModularGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularGameState, 609794523);
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameState>()
	{
		return AModularGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularGameState(Z_Construct_UClass_AModularGameState, &AModularGameState::StaticClass, TEXT("/Script/ModularGameplayActors"), TEXT("AModularGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
