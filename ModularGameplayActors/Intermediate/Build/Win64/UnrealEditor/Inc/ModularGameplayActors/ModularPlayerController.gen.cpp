// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularPlayerController() {}
// Cross Module References
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerController_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References
	void AModularPlayerController::StaticRegisterNativesAModularPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AModularPlayerController_NoRegister()
	{
		return AModularPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AModularPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ModularPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularPlayerController.h" },
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularPlayerController_Statics::ClassParams = {
		&AModularPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AModularPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularPlayerController, 749487051);
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularPlayerController>()
	{
		return AModularPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularPlayerController(Z_Construct_UClass_AModularPlayerController, &AModularPlayerController::StaticClass, TEXT("/Script/ModularGameplayActors"), TEXT("AModularPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
