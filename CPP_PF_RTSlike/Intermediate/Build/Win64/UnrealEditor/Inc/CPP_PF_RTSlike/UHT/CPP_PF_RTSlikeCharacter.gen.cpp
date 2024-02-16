// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_PF_RTSlike/CPP_PF_RTSlikeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_PF_RTSlikeCharacter() {}
// Cross Module References
	CPP_PF_RTSLIKE_API UClass* Z_Construct_UClass_ACPP_PF_RTSlikeCharacter();
	CPP_PF_RTSLIKE_API UClass* Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_PF_RTSlike();
// End Cross Module References
	void ACPP_PF_RTSlikeCharacter::StaticRegisterNativesACPP_PF_RTSlikeCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_PF_RTSlikeCharacter);
	UClass* Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_NoRegister()
	{
		return ACPP_PF_RTSlikeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_PF_RTSlike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_PF_RTSlikeCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CPP_PF_RTSlikeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_PF_RTSlikeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_PF_RTSlikeCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_PF_RTSlikeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_PF_RTSlikeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_CameraBoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_PF_RTSlikeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::ClassParams = {
		&ACPP_PF_RTSlikeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_PF_RTSlikeCharacter()
	{
		if (!Z_Registration_Info_UClass_ACPP_PF_RTSlikeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_PF_RTSlikeCharacter.OuterSingleton, Z_Construct_UClass_ACPP_PF_RTSlikeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_PF_RTSlikeCharacter.OuterSingleton;
	}
	template<> CPP_PF_RTSLIKE_API UClass* StaticClass<ACPP_PF_RTSlikeCharacter>()
	{
		return ACPP_PF_RTSlikeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_PF_RTSlikeCharacter);
	ACPP_PF_RTSlikeCharacter::~ACPP_PF_RTSlikeCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_PF_RTSlikeCharacter, ACPP_PF_RTSlikeCharacter::StaticClass, TEXT("ACPP_PF_RTSlikeCharacter"), &Z_Registration_Info_UClass_ACPP_PF_RTSlikeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_PF_RTSlikeCharacter), 1140074099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeCharacter_h_3469551530(TEXT("/Script/CPP_PF_RTSlike"),
		Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
