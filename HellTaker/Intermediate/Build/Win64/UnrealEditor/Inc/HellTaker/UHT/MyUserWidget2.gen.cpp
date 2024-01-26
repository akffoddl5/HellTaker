// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HellTaker/MyUserWidget2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget2() {}
// Cross Module References
	HELLTAKER_API UClass* Z_Construct_UClass_UMyUserWidget2();
	HELLTAKER_API UClass* Z_Construct_UClass_UMyUserWidget2_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HellTaker();
// End Cross Module References
	void UMyUserWidget2::StaticRegisterNativesUMyUserWidget2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyUserWidget2);
	UClass* Z_Construct_UClass_UMyUserWidget2_NoRegister()
	{
		return UMyUserWidget2::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserWidget2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserWidget2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HellTaker,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget2_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget2_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyUserWidget2.h" },
		{ "ModuleRelativePath", "MyUserWidget2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserWidget2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget2_Statics::ClassParams = {
		&UMyUserWidget2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget2_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyUserWidget2_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyUserWidget2()
	{
		if (!Z_Registration_Info_UClass_UMyUserWidget2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyUserWidget2.OuterSingleton, Z_Construct_UClass_UMyUserWidget2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyUserWidget2.OuterSingleton;
	}
	template<> HELLTAKER_API UClass* StaticClass<UMyUserWidget2>()
	{
		return UMyUserWidget2::StaticClass();
	}
	UMyUserWidget2::UMyUserWidget2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget2);
	UMyUserWidget2::~UMyUserWidget2() {}
	struct Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyUserWidget2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyUserWidget2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyUserWidget2, UMyUserWidget2::StaticClass, TEXT("UMyUserWidget2"), &Z_Registration_Info_UClass_UMyUserWidget2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyUserWidget2), 1576335052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyUserWidget2_h_1123660853(TEXT("/Script/HellTaker"),
		Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyUserWidget2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_MyUserWidget2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
