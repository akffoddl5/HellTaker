// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHellTaker_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HellTaker;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HellTaker()
	{
		if (!Z_Registration_Info_UPackage__Script_HellTaker.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HellTaker",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x20C08D50,
				0x40F17612,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HellTaker.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HellTaker.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HellTaker(Z_Construct_UPackage__Script_HellTaker, TEXT("/Script/HellTaker"), Z_Registration_Info_UPackage__Script_HellTaker, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x20C08D50, 0x40F17612));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
