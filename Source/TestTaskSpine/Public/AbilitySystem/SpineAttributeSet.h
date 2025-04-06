// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "SpineAttributeSet.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeChanged, FGameplayAttribute, Attribute, float, NewValue);

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

USTRUCT(BlueprintType)
struct FSpineAttributeRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxStamina;
};

/**
 * 
 */
UCLASS()
class TESTTASKSPINE_API USpineAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	USpineAttributeSet();

	UPROPERTY(BlueprintReadWrite, Category = "Vital Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(USpineAttributeSet, Health);

	UPROPERTY(BlueprintReadWrite, Category = "Vital Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(USpineAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadWrite, Category = "Vital Attributes")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(USpineAttributeSet, Stamina);
	
	UPROPERTY(BlueprintReadWrite, Category = "Vital Attributes")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(USpineAttributeSet, MaxStamina);

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	UPROPERTY(BlueprintAssignable)
	FOnAttributeChanged	OnAttributeChanged;
};
