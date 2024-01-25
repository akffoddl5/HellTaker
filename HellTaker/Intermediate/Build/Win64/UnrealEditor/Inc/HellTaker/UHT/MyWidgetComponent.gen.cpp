// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HellTaker/MyWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWidgetComponent() {}
// Cross Module References
	HELLTAKER_API UClass* Z_Construct_UClass_UMyWidgetComponent();
	HELLTAKER_API UClass* Z_Construct_UClass_UMyWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_HellTaker();
// End Cross Module References
	void UMyWidgetComponent::StaticRegisterNativesUMyWidgetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyWidgetComponent);
	UClass* Z_Construct_UClass_UMyWidgetComponent_NoRegister()
	{
		return UMyWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HellTaker,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyWidgetComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWidgetComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "MyWidgetComponent.h" },
		{ "ModuleRelativePath", "MyWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyWidgetComponent_Statics::ClassParams = {
		&UMyWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyWidgetComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UMyWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyWidgetComponent.OuterSingleton, Z_Construct_UClass_UMyWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyWidgetComponent.OuterSingleton;
	}
	template<> HELLTAKER_API UClass* StaticClass<UMyWidgetComponent>()
	{
		return UMyWidgetComponent::StaticClass();
	}
	UMyWidgetComponent::UMyWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyWidgetComponent);
	UMyWidgetComponent::~UMyWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyWidgetComponent, UMyWidgetComponent::StaticClass, TEXT("UMyWidgetComponent"), &Z_Registration_Info_UClass_UMyWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyWidgetComponent), 2358834761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyWidgetComponent_h_2798967041(TEXT("/Script/HellTaker"),
		Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
