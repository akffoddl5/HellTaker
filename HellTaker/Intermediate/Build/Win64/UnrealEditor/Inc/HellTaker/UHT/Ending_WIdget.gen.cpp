// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HellTaker/Ending_WIdget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnding_WIdget() {}
// Cross Module References
	HELLTAKER_API UClass* Z_Construct_UClass_UEnding_WIdget();
	HELLTAKER_API UClass* Z_Construct_UClass_UEnding_WIdget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HellTaker();
// End Cross Module References
	void UEnding_WIdget::StaticRegisterNativesUEnding_WIdget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnding_WIdget);
	UClass* Z_Construct_UClass_UEnding_WIdget_NoRegister()
	{
		return UEnding_WIdget::StaticClass();
	}
	struct Z_Construct_UClass_UEnding_WIdget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnding_WIdget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HellTaker,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnding_WIdget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnding_WIdget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ending_WIdget.h" },
		{ "ModuleRelativePath", "Ending_WIdget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnding_WIdget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnding_WIdget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnding_WIdget_Statics::ClassParams = {
		&UEnding_WIdget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnding_WIdget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnding_WIdget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnding_WIdget()
	{
		if (!Z_Registration_Info_UClass_UEnding_WIdget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnding_WIdget.OuterSingleton, Z_Construct_UClass_UEnding_WIdget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnding_WIdget.OuterSingleton;
	}
	template<> HELLTAKER_API UClass* StaticClass<UEnding_WIdget>()
	{
		return UEnding_WIdget::StaticClass();
	}
	UEnding_WIdget::UEnding_WIdget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnding_WIdget);
	UEnding_WIdget::~UEnding_WIdget() {}
	struct Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_Ending_WIdget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_Ending_WIdget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnding_WIdget, UEnding_WIdget::StaticClass, TEXT("UEnding_WIdget"), &Z_Registration_Info_UClass_UEnding_WIdget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnding_WIdget), 1545914304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_Ending_WIdget_h_2911043762(TEXT("/Script/HellTaker"),
		Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_Ending_WIdget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_Ending_WIdget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
