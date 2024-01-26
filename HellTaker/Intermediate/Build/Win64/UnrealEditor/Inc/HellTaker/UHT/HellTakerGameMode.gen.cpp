// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HellTaker/HellTakerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHellTakerGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HELLTAKER_API UClass* Z_Construct_UClass_AHellTakerGameMode();
	HELLTAKER_API UClass* Z_Construct_UClass_AHellTakerGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HellTaker();
// End Cross Module References
	struct HellTakerGameMode_eventSetWidgetNum_Parms
	{
		int32 Val;
	};
	static FName NAME_AHellTakerGameMode_GameInit_By_BluePrint = FName(TEXT("GameInit_By_BluePrint"));
	void AHellTakerGameMode::GameInit_By_BluePrint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHellTakerGameMode_GameInit_By_BluePrint),NULL);
	}
	static FName NAME_AHellTakerGameMode_SetWidgetNum = FName(TEXT("SetWidgetNum"));
	void AHellTakerGameMode::SetWidgetNum(int32 Val)
	{
		HellTakerGameMode_eventSetWidgetNum_Parms Parms;
		Parms.Val=Val;
		ProcessEvent(FindFunctionChecked(NAME_AHellTakerGameMode_SetWidgetNum),&Parms);
	}
	void AHellTakerGameMode::StaticRegisterNativesAHellTakerGameMode()
	{
	}
	struct Z_Construct_UFunction_AHellTakerGameMode_GameInit_By_BluePrint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHellTakerGameMode_GameInit_By_BluePrint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HellTakerGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHellTakerGameMode_GameInit_By_BluePrint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHellTakerGameMode, nullptr, "GameInit_By_BluePrint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHellTakerGameMode_GameInit_By_BluePrint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHellTakerGameMode_GameInit_By_BluePrint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHellTakerGameMode_GameInit_By_BluePrint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHellTakerGameMode_GameInit_By_BluePrint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HellTakerGameMode_eventSetWidgetNum_Parms, Val), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HellTakerGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHellTakerGameMode, nullptr, "SetWidgetNum", nullptr, nullptr, Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::PropPointers), sizeof(HellTakerGameMode_eventSetWidgetNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::PropPointers) < 2048);
	static_assert(sizeof(HellTakerGameMode_eventSetWidgetNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHellTakerGameMode);
	UClass* Z_Construct_UClass_AHellTakerGameMode_NoRegister()
	{
		return AHellTakerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHellTakerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHellTakerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HellTaker,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHellTakerGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AHellTakerGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHellTakerGameMode_GameInit_By_BluePrint, "GameInit_By_BluePrint" }, // 1575696000
		{ &Z_Construct_UFunction_AHellTakerGameMode_SetWidgetNum, "SetWidgetNum" }, // 2221315610
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHellTakerGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHellTakerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HellTakerGameMode.h" },
		{ "ModuleRelativePath", "HellTakerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHellTakerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHellTakerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHellTakerGameMode_Statics::ClassParams = {
		&AHellTakerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHellTakerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHellTakerGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHellTakerGameMode()
	{
		if (!Z_Registration_Info_UClass_AHellTakerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHellTakerGameMode.OuterSingleton, Z_Construct_UClass_AHellTakerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHellTakerGameMode.OuterSingleton;
	}
	template<> HELLTAKER_API UClass* StaticClass<AHellTakerGameMode>()
	{
		return AHellTakerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHellTakerGameMode);
	AHellTakerGameMode::~AHellTakerGameMode() {}
	struct Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_HellTakerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_HellTakerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHellTakerGameMode, AHellTakerGameMode::StaticClass, TEXT("AHellTakerGameMode"), &Z_Registration_Info_UClass_AHellTakerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHellTakerGameMode), 4129022216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_HellTakerGameMode_h_2879136361(TEXT("/Script/HellTaker"),
		Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_HellTakerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_git_HellTaker_HellTaker_Source_HellTaker_HellTakerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
